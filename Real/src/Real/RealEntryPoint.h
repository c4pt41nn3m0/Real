#pragma once

#ifdef REAL_PLATFORM_WINDOWS

extern Real::RApplication* Real::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Real::CreateApplication();
	app->Run();
	delete app;
}

#endif