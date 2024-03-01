#pragma once

#ifdef REAL_PLATFORM_WINDOWS

extern Real::RApplication* Real::CreateApplication();

int main(int argc, char** argv)
{
	Real::Log::Init();
    REAL_CORE_WARN("Initialized Core Log");

	auto app = Real::CreateApplication();
	REAL_APP_INFO("Initialized Application Log");
	app->Run();
	delete app;
}

#endif