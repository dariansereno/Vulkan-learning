#pragma once

#include "window.hpp"

#include <string>
#include <vector>

#include <iostream>
#include <unordered_set>

namespace engine
{

	struct QueueFamilyIndices
	{
		uint32_t graphicsFamily;
		uint32_t presentFamily;
		bool graphicsFamilyHasValue = false;
		bool presentFamilyHasValue = false;
	};

	struct SwapChainSupportDetails
	{
		VkSurfaceCapabilitiesKHR capabilities;
		std::vector<VkSurfaceFormatKHR> formats;
		std::vector<VkPresentModeKHR> presentModes;
	};

	class EngineDevice
	{
	public:
		const std::vector<const char *> validationLayers = {
			"VK_LAYER_KHRONOS_validation",
		};
		const std::vector<const char *> deviceExtensions = {
			VK_KHR_SWAPCHAIN_EXTENSION_NAME,
			"VK_KHR_portability_subset"};
		const std::vector<const char *> instanceExtensions = {
			"VK_KHR_get_physical_device_properties2"};
#ifdef NDEBUG
		const bool enableValidationLayers = false;
#else
		const bool enableValidationLayers = true;
#endif

		EngineDevice(EngineWindow &window);
		~EngineDevice();

		EngineDevice(const EngineDevice &) = delete;
		void operator=(const EngineDevice &) = delete;
		EngineDevice(EngineDevice &&) = delete;
		EngineDevice &operator=(EngineDevice &&) = delete;

	private:
		void createInstance();

		void hasGflwRequiredInstanceExtensions();
		std::vector<const char *> getRequiredExtensions();

		bool checkValidationLayerSupport();
		void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT &createInfo);
		void setupDebugMessenger();

		void pickPhysicalDevice();
		bool isDeviceSuitable(VkPhysicalDevice device);
		int rateDeviceSuitability(VkPhysicalDevice device);

		QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);
		void createLogicalDevice();
		void createSurface();
		bool checkDeviceExtensionSupport(VkPhysicalDevice device);

		SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device);
		uint32_t findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties);
		QueueFamilyIndices findPhysicalQueueFamilies() { return findQueueFamilies(_physicalDevice); }
		VkFormat findSupportedFormat(const std::vector<VkFormat> &candidates, VkImageTiling tiling, VkFormatFeatureFlags features);
		void createCommandPool();

		void createBuffer(
			VkDeviceSize size,
			VkBufferUsageFlags usage,
			VkMemoryPropertyFlags properties,
			VkBuffer &buffer,
			VkDeviceMemory &bufferMemory);
		VkCommandBuffer beginSingleTimeCommands();
		void endSingleTimeCommands(VkCommandBuffer commandBuffer);
		void copyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size);
		void copyBufferToImage(
			VkBuffer buffer, VkImage image, uint32_t width, uint32_t height, uint32_t layerCount);

		void createImageWithInfo(
			const VkImageCreateInfo &imageInfo,
			VkMemoryPropertyFlags properties,
			VkImage &image,
			VkDeviceMemory &imageMemory);

		VkPhysicalDeviceProperties properties;

		VkInstance _instance;
		VkDebugUtilsMessengerEXT _debugMessenger;
		VkPhysicalDevice _physicalDevice = VK_NULL_HANDLE;
		VkCommandPool _commandPool;

		EngineWindow &_window;
		VkDevice _device;
		VkQueue _graphicsQueue;
		VkQueue _presentQueue;
		VkSurfaceKHR _surface;
	};
};
