#pragma once



extern Hazel::Application* Hazel::CreateApplication();


int main() {
	Hazel::Application* sandbox = Hazel::CreateApplication();
	sandbox->Run();
	delete sandbox;
}

