#pragma once



extern Hazel::Application* Hazel::CreateApplication();


int main() {
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("Hello u");
	HZ_ERROR("boooooeeeeeeem");
	Hazel::Application* sandbox = Hazel::CreateApplication();
	sandbox->Run();
	delete sandbox;
}



