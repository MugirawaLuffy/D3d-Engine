/*
* DirectX 11 Engine
* @author Nils Drees
* C++20 Iso needed to compile x86
* Licensed under Apache 2.0
* 15.5 hours development
*/

#include "Engine.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE  hPrevInstance,
	_In_ LPWSTR			lpCMDLine,
	_In_ int			nCmdShow)
{
	Engine engine;
	if (engine.Initialize(hInstance, "Nils DirectX render engine", "defaultWindowClass", 800, 600))
	{
		while (engine.ProcessMessages() == true)
		{
			engine.Update();
			engine.RenderFrame();
		}
	}
	else return -1;
	
	return 0x45;
}


//------------------------Setting Up Win32 WindowFramework-----------------------------------------------------
//Adding WinMain		- COMPLETED
//Creating Window		- COMPLETED
//Register WindowClass	- COMPLETED
//Abstract into classes - COMPLETED
//Handling message PUMP - COMPLETED
//	--> keyoard EVENTS	- COMPLETED
//	--> mouse   EVENTS	- COMPLETED
//Optimizing .exe		- COMPLETED (to ~39MB and ~0.003% CPU)
//Benchmark Framework	- COMPLETED (~raw 1000FPS)

//------------------------Setting Up DirectX Render Pipeline----------------------------------------------------
//SWAPCHAIN/D3Ddevice	- COMPLETED
//INPUT ASSEMBLER		- COMPLETED
//VERTEX SHADER			- COMPLETED
//RASTERIZER			- COMPLETED
//PIXEL SHADER			- COMPLETED
//OUTPUT MERGER			- COMPLETED      -------------------- SETUP COMPLETE (14 hours) ------------------------


//----------------------------Advanced Setup for DirectX---------------------------------------------------------
//Create VertexBuffer   - COMPLETED
//Draw					- COMPLETED
//Rasterizer State		- COMPLETED