/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * Copyright (c) 1998-2000 Ludus Design enr.
 * All Rights Reserved.
 * Tous droits r�serv�s.
 */

#include <stdio.h>
#include "types.h"
#include "video.h"
#include "palette.h"

Palette noir;

void Palette::set() {
  video->dosetpal(pal, size);
}

void Palette::load(const Image& raw) {
	size=raw.palettesize();
	int j=0;
	for(int i(0); i<size; i++) {
		pal[i].peRed = raw.pal()[j++];
		pal[i].peGreen = raw.pal()[j++];
		pal[i].peBlue = raw.pal()[j++];
	}
}

Remap::Remap(const Palette& d, Palette* src): dst(d) {
	if(src) {
		for(int i=0; i<src->size; i++)
			findrgb((Byte) i, src->r((Byte) i), src->g((Byte) i), src->b((Byte) i));
	}
}

void Remap::findrgb(const Byte m, const Byte r, const Byte g, const Byte b) {
	int best_diff=9999999, diff;
	Byte best_i=0;
	for(int i=1; i<dst.size; i++) {
		diff=(int) ((dst.pal[i].peRed-r)*(dst.pal[i].peRed-r)*2 + (dst.pal[i].peGreen-g)*(dst.pal[i].peGreen-g)*3 + (dst.pal[i].peBlue-b)*(dst.pal[i].peBlue-b));
		if(diff == 0) {
			map[m] = (Byte) i;
			return;
		}
		if(diff < best_diff) {
			best_i = (Byte) i;
			best_diff = diff;
		}
	}
	map[m] = best_i;
}

Fade::Fade(const Palette& dst, const Palette& src, int frame) {
	int j=0;
	for(int i(0); i<256; i++) {
		current[j++]=(short) (src.pal[i].peRed<<7);
		current[j++]=(short) (src.pal[i].peGreen<<7);
		current[j++]=(short) (src.pal[i].peBlue<<7);
	}
	newdest(dst, frame);
}

void Fade::setdest(const Palette& dst) {
	dest=dst;
	int j=0;
	for(int i(0); i<256; i++) {
		current[j++]=(short) (dest.pal[i].peRed<<7);
		current[j++]=(short) (dest.pal[i].peGreen<<7);
		current[j++]=(short) (dest.pal[i].peBlue<<7);
	}
	video->setpal(dest);
	currentframe=destframe;
}

void Fade::newdest(const Palette& dst, int frame) {
	dest=dst;
	int j=0;
	for(int i(0); i<256; i++) {
		delta[j]=(short) (((dest.pal[i].peRed<<7)-current[j++])/frame);
		delta[j]=(short) (((dest.pal[i].peGreen<<7)-current[j++])/frame);
		delta[j]=(short) (((dest.pal[i].peBlue<<7)-current[j++])/frame);
	}
	currentframe=0;
	destframe=frame;
}

int Fade::step() {
	if(currentframe==destframe)
		return 1;
	else {
		for(int i(0); i<768; i++)
			current[i] = (short) (current[i] + delta[i]);
		currentframe++;
		return 0;
	}
}

void Fade::set() {
	if(currentframe==destframe)
		return;
	if(currentframe==destframe-1) {
		video->setpal(dest);
	} else {
		video->pal.set_size(256);
		for(int i(0); i<256; i++)
			video->pal.setcolor((Byte) i, (Byte) (current[i*3]>>7), (Byte) (current[i*3+1]>>7), (Byte) (current[i*3+2]>>7));
		video->newpal = true;
	}
}
