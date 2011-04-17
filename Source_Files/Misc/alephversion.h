#ifndef __ALEPHVERSION_H
#define __ALEPHVERSION_H

/*
ALEPHVERSION.H

	Copyright (C) 2002 and beyond by the "Aleph One" developers
 
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	This license is contained in the file "COPYING",
	which is included with this source code; it is available online at
	http://www.gnu.org/licenses/gpl.html

*/


#define A1_DISPLAY_VERSION "1.0b1"
#define A1_DISPLAY_DATE_VERSION "2011-02-20"
#define A1_DATE_VERSION "20110220"

#ifdef WIN32
#define A1_DISPLAY_PLATFORM "Windows"
#define A1_UPDATE_PLATFORM "windows"
#elif defined (__APPLE__) && defined(__MACH__)
#define A1_DISPLAY_PLATFORM "Mac OS X"
#define A1_UPDATE_PLATFORM "macosx"
#elif defined (__MACOS__)
#define A1_DISPLAY_PLATFORM "Mac OS"
#define A1_UPDATE_PLATFORM "macos"
#elif defined (linux)
#define A1_DISPLAY_PLATFORM "Linux"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__BEOS__)
#define A1_DISPLAY_PLATFORM "BeOS"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__NetBSD__)
#define A1_DISPLAY_PLATFORM "NetBSD"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__OpenBSD__)
#define A1_DISPLAY_PLATFORM "OpenBSD"
#define A1_UPDATE_PLATFORM "source"
#else
#define A1_DISPLAY_PLATFORM "Unknown"
#define A1_UPDATE_PLATFORM "source"
#endif

#ifndef A1_VERSION_STRING
#define A1_VERSION_STRING A1_DISPLAY_PLATFORM " " A1_DISPLAY_DATE_VERSION " " A1_DISPLAY_VERSION
#endif


#endif // ALEPHVERSION_H
