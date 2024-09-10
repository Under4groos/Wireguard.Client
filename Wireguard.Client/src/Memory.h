#pragma once
#include "Headers.h"



FARPROC WINAPI dll_imp_GetProcAddress(
	_In_ LPCSTR mdProcHendleName,
	_In_ LPCSTR lpProcName
) {



	return GetProcAddress(GetModuleHandle(TEXT(mdProcHendleName)), lpProcName);

};

