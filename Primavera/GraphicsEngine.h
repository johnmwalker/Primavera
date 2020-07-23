#pragma once
#include<d3d11.h>
//#include"SwapChain.h"


class SwapChain;
class DeviceContext;

class GraphicsEngine
{
public:
	GraphicsEngine();
	bool init();
	bool release();
	~GraphicsEngine();

	SwapChain* createSwapChain();
	DeviceContext* getImmediateDeviceContext();

	static GraphicsEngine* get();
private:
	ID3D11Device* m_d3d_device = nullptr;
	D3D_FEATURE_LEVEL m_feature_level;
	ID3D11DeviceContext* m_imm_context = nullptr;

	IDXGIDevice* m_dxgi_device;
	IDXGIAdapter* m_dxgi_adapter;
	IDXGIFactory* m_dxgi_factory;

	friend class SwapChain;

	DeviceContext* m_imm_device_context;
};


