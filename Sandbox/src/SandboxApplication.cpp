
#include "RealIncludes.h"

class SandboxApplication : public Real::RApplication
{
public:
	SandboxApplication()
	{

	}

	~SandboxApplication()
	{

	}
};

Real::RApplication* Real::CreateApplication()
{
	return new SandboxApplication();
}