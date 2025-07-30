#pragma once

#ifdef _WIN32
	// Allow use of features specific to Windows 7 or later.
	#define WINVER 0x0601
	#define _WIN32_WINNT 0x0601

	// Exclude rarely-used stuff from Windows headers
	#define WIN32_LEAN_AND_MEAN
	#define VC_EXTRALEAN

	#include <Shlobj.h>
	#include <Windows.h>
#endif

// Add cross-platform headers here
#include <iostream>
#include <string>