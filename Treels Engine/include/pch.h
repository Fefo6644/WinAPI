#ifndef _PRECOMPILED_HEADER_
#define _PRECOMPILED_HEADER_

#ifndef UNICODE
#define UNICODE
#endif // UNICODE

#ifndef _UNICODE
#define _UNICODE
#endif // _UNICODE

// Disable lots of stuff from Win32 API cause they bad :(
#define WIN32_LEAN_AND_MEAN
#define NOGDICAPMASKS
#define NOSYSMETRICS
#define NOMENUS
#define NOICONS
#define NOSYSCOMMANDS
#define NORASTEROPS
#define OEMRESOURCE
#define NOATOM
#define NOCLIPBOARD
#define NOCOLOR
#define NOCTLMGR
#define NODRAWTEXT
#define NOKERNEL
#define NONLS
#define NOMEMMGR
#define NOMETAFILE
#define NOOPENFILE
#define NOSCROLL
#define NOSERVICE
#define NOSOUND
#define NOTEXTMETRIC
#define NOWH
#define NOCOMM
#define NOKANJI
#define NOHELP
#define NOPROFILER
#define NODEFERWINDOWPOS
#define NOMCX
#define NORPC
#define NOPROXYSTUB
#define NOIMAGE
#define NOTAPE
#define NOMINMAX

// Win32 API header files
#include <Windows.h>
#include <windowsx.h>
#include <d2d1_3.h>

// C++ STL header files
#include <chrono>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
#include <thread>
#include <algorithm>
#include <utility>
#include <filesystem>

#endif // !_PRECOMPILED_HEADER_
