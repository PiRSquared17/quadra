/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * Copyright (c) 1998-2000 Ludus Design enr.
 * All Rights Reserved.
 * Tous droits r�serv�s.
 */

#ifndef _HEADER_RECORDING
#define _HEADER_RECORDING

#include "types.h"
#include "net_stuff.h"
#include "buf.h"

class Res_compress;
class Res;
class Canvas;

class Recording {
	TRACKED;
	char playername[40];
	int score, lines, level;
	/*
	Voici les hunks:
		0: start_for_single: un seed pis 3 repeatspeeds
		1: single_start: un numero de player
		2: game_begin: les touches d'une game single
		3: game_stop: les infos d'une game single
	 11: write_packet: un numero de frame d'overmind (Dword), la size d'un packet (Word) pis le packet
	 13: summary: size (Dword) et du texte (� la Qserv)
	*/
	void write_hunk(Byte h);
	void end_single(Canvas *c);
public:
	Byte *all_output;
	Dword all_output_size;
	Dword frame;
	void step();
	Res_compress *res;
	Recording();
	virtual ~Recording();
	void start_for_multi(Packet* p);
	void write_packet(Packet* p);
	bool create(const char *n);
	void end_multi();
	void write_summary();
};

class Demo_packet {
public:
	Dword frame;
	Packet* p;
	Demo_packet(const Demo_packet& dp);
	Demo_packet(Dword pframe, Packet* pp);
	virtual ~Demo_packet();
};

class Dict;

class Playback {
	TRACKED;
	Res *res;
	Byte read_hunk();
	void read_all(); //Sole caller of next 6
	void read_seed();
	void read_single();
	void read_data();
	void read_info();
	void read_packet();
	void read_summary();
	Buf data;
	Dword nextByte;
	Array<Demo_packet *> packets;
public:
	Byte single_player;
	Packet_gameserver *packet_gameserver;
	Dict *sum;
	bool single();
	bool old_mode;
	bool valid;
	bool completed;
	bool auto_demo;
	void create_game();
	void shit_skipper2000(bool remove_chat);
	int seed;
	struct {
		char name[40];
		int color, shadow, smooth, repeat;
	} player[3];
	int score, lines, level, multi_level;
	Playback(Res* r);
	virtual ~Playback();
	Byte get_byte();
	bool check_scores(Canvas* c);
	Demo_packet next_packet();
	void remove_packet();
};

extern Recording *recording;
extern Playback *playback;

#endif
