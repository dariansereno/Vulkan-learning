#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <vulkan/vulkan.h>

#include <string>

namespace engine
{

	class EngineWindow
	{
	public:
		EngineWindow(int h, int w, std::string name);
		~EngineWindow();

		bool shouldClose() { return glfwWindowShouldClose(window); }

		EngineWindow(const EngineWindow &) = delete;
		EngineWindow &operator=(const EngineWindow &) = delete;

		void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);
		// void destroyWindowSurface(VkInstance instance, VkSurfaceKHR & surface);

	private:
		void initWindow();

		int _width;
		int _height;

		std::string _name;
		GLFWwindow *window;
	};

};