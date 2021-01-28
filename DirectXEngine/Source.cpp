/*
* DirectX 11 Engine
* @author Nils Drees
* C++20 Iso needed to compile x86
* Licensed under Apache 2.0
* 9 hours development
*/

#include "Engine.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE  hPrevInstance,
	_In_ LPWSTR			lpCMDLine,
	_In_ int			nCmdShow)
{
	Engine engine;
	engine.Initialize(hInstance, "Nils DirectX render engine", "defaultWindowClass", 800, 600);
	//ErrorLogger::Log(S_OK, "Task Failed successfully");
	while (engine.ProcessMessages() == true)
	{
		engine.Update();
	}
	return 0x45;
}