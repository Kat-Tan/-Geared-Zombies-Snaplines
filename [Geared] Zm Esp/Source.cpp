#include "Functions.h"
#include "Detours.h"



void(*Menu_PaintAll_Stub)(int, int) = (void(*)(int, int))0x00552D80;
void Menu_PaintAll_Hook(int A, int B)
{
	SnapLines();

	Menu_PaintAll_Stub(A, B);
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID p)
{
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		Engine.T5ZM_Init();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)Menu_PaintAll_Stub, (LPVOID)Menu_PaintAll_Hook);
		DetourTransactionCommit();

		break;

	case DLL_PROCESS_DETACH:
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(PVOID&)Menu_PaintAll_Stub, (LPVOID)Menu_PaintAll_Hook);
		DetourTransactionCommit();
		break;
	}
	return TRUE;
}