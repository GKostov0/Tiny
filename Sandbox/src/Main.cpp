#include <Tiny.h>

class Sandbox : public Tiny::Application
{
public:
	Sandbox() {};
	~Sandbox() {};

private:

};

Tiny::Application* Tiny::CreateApplication()
{
	return new Sandbox();
}