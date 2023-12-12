#include "window.hpp"
#include "pipeline.hpp"
#include "device.hpp"

namespace engine
{
	class scop
	{
	public:
		static constexpr int HEIGHT = 800;
		static constexpr int WIDTH = 800;

		void run();

	private:
		EngineWindow window{WIDTH, HEIGHT, "HELLO"};
		EnginePipeline pipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
		EngineDevice device{window};
	};
};