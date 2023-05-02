#pragma once

#ifdef TY_PLATFORM_WINDOWS

extern Tiny::Application* Tiny::CreateApplication();

int main(int argc, char** argv)
{
	Tiny::Log::Init();
	TY_CORE_WARN("Initialized Log!");

	int a = 5;

	TY_INFO("Hello! {0}", a);

	auto app = Tiny::CreateApplication();
	app->Run();
	delete app;
}

#endif // TY_PLATFORM_WINDOWS