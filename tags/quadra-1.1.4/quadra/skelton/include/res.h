/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * Copyright (c) 1998-2000 Ludus Design enr.
 * All Rights Reserved.
 * Tous droits r�serv�s.
 */

#ifndef _HEADER_RES
#define _HEADER_RES

#include <stdlib.h>
#include <fcntl.h>
#include "resfile.h"
#include "resmanager.h"

#ifdef UGS_LINUX
	#include <unistd.h>
#endif

#ifdef UGS_DIRECTX
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <windowsx.h>
	#include <mmsystem.h>
	#include <io.h>
#endif

#include "track.h"
#include "error.h"
#include "types.h"
#include "utils.h"

class Res {
public:
	virtual ~Res() { }
	virtual int read(void *b, int nb)=0;
	virtual Dword size()=0;
	virtual void position(Dword po)=0;
	virtual const void *buf()=0;
	virtual bool eof()=0;
	virtual Dword get_position()=0;
};

class Res_mem: public Res {
protected:
	Byte *_buf;
	Dword pos;
public:
	Res_mem();
	virtual int read(void *b, int nb) {
		if(pos+nb>size()) {
			mset(b, 0, nb);
			nb=size()-pos;
		}
		cpy((Byte *) b, _buf + pos, nb);
		pos += nb;
		return nb;
	}
	virtual void position(Dword po) {
		pos = po;
	}
	virtual const void *buf() {
		return(_buf + pos);
	}
	virtual bool eof() {
		return (pos >= size());
	}
	virtual Dword get_position() {
		return pos;
	}
};

#ifdef ONVEUTDESRESDOZEPOCHES
class Res_doze: public Res_mem {
	HRSRC hResInfo;
public:
	Res_doze(LPCTSTR lpName);
	virtual ~Res_doze() {
		FreeResource(hResInfo);
	}
	virtual Dword size() {
		return SizeofResource(NULL, hResInfo);
	}
};
#endif

class Res_doze: public Res_mem {
	unsigned int ressize;
public:
	Res_doze(const char *resname) {
		ressize = resmanager->get(resname, &_buf);
		if(!_buf)
			(void) new Error("Unable to find resource: %s", resname);
	}
	virtual ~Res_doze() {
	}
	virtual Dword size() {
		return ressize;
	}
};

enum Res_mode {
	RES_READ,
	RES_WRITE,
	RES_CREATE,
	RES_TRY
};

class Res_dos: public Res {
	TRACKED;
	int handle;
	void *_buf;
public:
	bool exist;
	Res_dos(const char *fil, Res_mode mode=RES_READ);
	virtual ~Res_dos();
	virtual void position(Dword po);
	virtual int read(void *b, int nb);
	virtual void write(const void *b, int nb);
	virtual Dword size();
	virtual const void* buf();
	virtual bool eof();
	virtual Dword get_position();
};

#endif
