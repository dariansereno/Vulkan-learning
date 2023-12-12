#include "pipeline.hpp"

#include <fstream>
#include <iostream>

namespace engine
{
	EnginePipeline::EnginePipeline(
		const EngineDevice &device,
		const std::string &vertFilePath,
		const std::string &fragFilePath,
		const PipelineConfigInfo &info)
	{
		createGraphicsPipeline(vertFilePath, fragFilePath);
	}

	std::vector<char> EnginePipeline::readFile(const std::string &filepath)
	{
		std::ifstream file{filepath, std::ios::ate | std::ios::binary};

		if (!file.is_open())
		{
			throw std::runtime_error("failed to open file: " + filepath);
		}
		size_t fileSize = static_cast<size_t>(file.tellg());
		std::vector<char> buffer(fileSize);

		file.seekg(0);
		file.read(buffer.data(), fileSize);

		file.close();
		return buffer;
	}

	void EnginePipeline::createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath)
	{
		auto vertCode = readFile(vertFilepath);
		auto fragCode = readFile(fragFilepath);

		std::cout << "Vertex Shader Code Size: " << vertCode.size() << '\n';
		std::cout << "Fragment Shader Code Size:" << fragCode.size() << '\n';
	}

} // namespace engine
