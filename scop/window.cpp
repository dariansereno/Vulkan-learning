#include "window.hpp"
namespace engine
{
	EngineWindow::EngineWindow(int h, int w, std::string name) : _width(w), _height(h), _name(name)
	{
		initWindow();
	}

	EngineWindow::~EngineWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void EngineWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(_width, _height, _name.c_str(), nullptr, nullptr);
	}
	void EngineWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR *surface)
	{
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS)
		{
			throw std::runtime_error("failed to create window surface!");
		}
	}

}