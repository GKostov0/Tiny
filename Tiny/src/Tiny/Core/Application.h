#pragma once

#include "Core.h"

#include "Window.h"
#include "Tiny/LayerStack.h"
#include "Tiny/Events/Event.h"
#include "Tiny/Events/ApplicationEvent.h"

namespace Tiny
{
	class TINY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlayer(Layer* layer);

		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWinow() { return *m_Window; }

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;

	private:
		static Application* s_Instance;
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}