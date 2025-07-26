/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  (c) 2001-2003 Electronic Arts Inc.                                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

// This file contains all the header files that shouldn't change frequently.
// Be careful what you stick in here, because putting files that change often in here will 
// tend to cheese people's goats.

#ifndef __PRERTS_H__
#define __PRERTS_H__

//-----------------------------------------------------------------------------
// srj sez: this must come first, first, first.
#define _STLP_USE_NEWALLOC					1
//#define _STLP_USE_CUSTOM_NEWALLOC		STLSpecialAlloc
class STLSpecialAlloc;


// We actually don't use Windows for much other than timeGetTime, but it was included in 40 
// different .cpp files, so I bit the bullet and included it here.
// PLEASE DO NOT ABUSE WINDOWS OR IT WILL BE REMOVED ENTIRELY. :-)
//--------------------------------------------------------------------------------- System Includes 
#define WIN32_LEAN_AND_MEAN
// #include <atlbase.h> -- Win32
// #include <windows.h> -- Win32

#include <cassert>
#include <cctype>
// #include <direct.h> -- Win32
// #include <EXCPT.H> -- Win32
#include <cfloat>
#include <fstream>
// #include <imagehlp.h> -- Win32
// #include <io.h> -- Win32
#include <climits>
// #include <lmcons.h> -- Win32
// #include <mapicode.h> -- Win32
#include <cmath>
#include <memory>
// #include <mmsystem.h> -- Win32
// #include <objbase.h> -- Win32
// #include <ocidl.h> -- Win32
// #include <process.h> -- Win32
// #include <shellapi.h> -- Win32
// #include <shlobj.h> -- Win32
// #include <shlguid.h> -- Win32
// #include <snmp.h> -- Win32
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sys/stat.h>
#include <sys/timeb.h>
#include <sys/types.h>
// #include <TCHAR.H> -- Win32
#include <ctime>
// #include <vfw.h> -- Win32
// #include <winerror.h> -- Win32
// #include <wininet.h> -- Win32
// #include <winreg.h> -- Win32

#ifndef DIRECTINPUT_VERSION
#	define DIRECTINPUT_VERSION	0x800
#endif

// #include <dinput.h> -- Win32

//------------------------------------------------------------------------------------ STL Includes
// srj sez: no, include STLTypesdefs below, instead, thanks
//#include <algorithm>
//#include <bitset>
//#include <hash_map>
//#include <list>
//#include <map>
//#include <queue>
//#include <set>
//#include <stack>
//#include <string>
//#include <vector>

//------------------------------------------------------------------------------------ RTS Includes
// Icky. These have to be in this order.
#include "Lib/BaseType.h"
#include "Common/STLTypedefs.h"
#include "Common/Errors.h"
#include "Common/Debug.h"
#include "Common/AsciiString.h"
#include "Common/SubsystemInterface.h"

#include "Common/GameCommon.h"
#include "Common/GameMemory.h"
#include "Common/GameType.h"
#include "Common/GlobalData.h"

// You might not want Kindof in here because it seems like it changes frequently, but the problem
// is that Kindof is included EVERYWHERE, so it might as well be precompiled.
#include "Common/INI.h"
#include "Common/KindOf.h"
#include "Common/DisabledTypes.h"
#include "Common/NameKeyGenerator.h"
#include "GameClient/ClientRandomValue.h"
#include "GameLogic/LogicRandomValue.h"

#include "Common/Thing.h"
#include "Common/UnicodeString.h"

#endif /* __PRERTS_H__ */
