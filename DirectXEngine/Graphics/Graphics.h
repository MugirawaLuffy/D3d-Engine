#pragma once
#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "DirectXTK.lib")

class Graphics
{
public:
	bool Initialize(HWND hwnd, int width, int height);
private:
	bool InitializeDirectX(HWND hwnd, int width, int height);

	ID3D11Device* device;
	ID3D11DeviceContext* deviceContext;
	IDXGISwapChain* swapchain;
	ID3D11RenderTargetView* renderTargetView;
};