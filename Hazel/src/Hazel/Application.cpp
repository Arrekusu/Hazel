#include "Application.h"

#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Log.h"

namespace Hazel {
	void Application::Run()
	{
		KeyPressedEvent e{ 15, 5 };
		HZ_TRACE(e);

		while (true);
	}
}