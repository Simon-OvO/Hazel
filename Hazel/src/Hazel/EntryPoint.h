#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* CreateApplication();

int main(int argc, char** argv)
{
	auto sandbox = CreateApplication();
	sandbox->run();
	delete sandbox;
}

#endif