#pragma once

#include "Core.h"

namespace Real
{
	class REAL_API RApplication
	{
	public:
		//Constructor
		RApplication();
		// Virtual Destructor
		virtual ~RApplication();

		void Run();
	};

	// To be defined in client application
	RApplication* CreateApplication();
}

