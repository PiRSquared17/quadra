/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * 
 * Quadra, an action puzzle game
 * Copyright (C) 1998-2000  Ludus Design
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _HEADER_SOUND
#define _HEADER_SOUND

#include "autoconf.h"
#if defined(HAVE_SDL_H)
#include "SDL.h"
#elif defined(HAVE_SDL_SDL_H)
#include "SDL/SDL.h"
#endif
#include "array.h"
#include "res.h"

class SampleData;
class Playing_sfx;

class Sound {
  SDL_AudioSpec spec;
	Array<Playing_sfx*> plays;
	static void audio_callback(void *userdata, Uint8 *stream, int len);
	Sound(const SDL_AudioSpec& _spec);
public:
  static Sound* New();
  SampleData* normalize(char* _sample, unsigned int _size,
                        unsigned int _freq, unsigned int _bps);
  void start(SampleData* _sam, int _vol, int _pan, int _freq);
	~Sound();
};

class Sample {
  SampleData* data;
	void loadriff(Res& _res);
public:
	Sample(Res& re);
  // It's a mystery to me why the previous constructor isn't
  // sufficient, but it isn't, so here we are.
  Sample(Res_doze re);
	void play(int _vol, int _pan, int _freq);
	~Sample();
};

extern Sound* sound;

#endif
