#include <Tiny.h>

class ExampleLayer : public Tiny::Layer
{
public:
	ExampleLayer()
		: Layer("Example") {}

	void OnUpdate() override
	{
		TY_INFO("ExampleLayer::Update");
	}

	void OnEvent(Tiny::Event& event) override
	{
		TY_TRACE("{0}", event);
	}
};

class Sandbox : public Tiny::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	};

	~Sandbox() {};

private:

};

Tiny::Application* Tiny::CreateApplication()
{
	return new Sandbox();
}