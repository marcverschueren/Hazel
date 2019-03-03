#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}

//int main() {
//	Hazel::Application* sandbox = Hazel::CreateApplication();
//	sandbox->Run();
//	delete sandbox;
//}