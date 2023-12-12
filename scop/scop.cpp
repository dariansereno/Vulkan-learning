#include "scop.hpp"

namespace engine
{
	void scop::run()
	{
		while (!window.shouldClose())
		{
			glfwPollEvents();
		}
	}
}