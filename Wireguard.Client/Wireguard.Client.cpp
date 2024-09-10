



#include "src/Headers.h"


#if ((ULONG_MAX) == (UINT_MAX))
#define IS64BIT 0
#else
#define IS64BIT 1
#endif

#define WG_LIB "wireguard.dll"

using namespace std;

 
int main()
{
	HMODULE handle = LoadLibraryEx((LPCSTR)WG_LIB, NULL, NULL);
	if (!handle)
	{
		return 0;
	}
	cout << WG_LIB << ": " << handle << endl;
	WireGuardGetRunningDriverVersion proc_ = (WireGuardGetRunningDriverVersion)dll_imp_GetProcAddress(WG_LIB, "WireGuardGetRunningDriverVersion");
	if (proc_)
		cout << proc_() << endl;



	return 0;
}

