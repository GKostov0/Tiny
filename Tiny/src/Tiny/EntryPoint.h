#pragma once

#ifdef TY_PLATFORM_WINDOWS

extern Tiny::Application* Tiny::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tiny::CreateApplication();
	app->Run();
	delete app;
}

#endif // TY_PLATFORM_WINDOWS