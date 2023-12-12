#pragma once

#include <string>
#include <vector>
#include "device.hpp"

namespace engine
{

	struct PipelineConfigInfo
	{
	};

	class EnginePipeline
	{
	public:
		EnginePipeline(
			const EngineDevice &device,
			const std::string &vertFilePath,
			const std::string &fragFilePath,
			const PipelineConfigInfo &info);

	private:
		static std::vector<char> readFile(const std::string &readPath);

		void createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath, const PipelineConfigInfo info);

		EngineDevice & _device;
	};
};