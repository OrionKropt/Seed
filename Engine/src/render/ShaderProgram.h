#pragma once

#include <string>

namespace Renderer {

	class ShaderProgram
	{
	public:
		ShaderProgram(const std::string& vertex_shader, const std::string& fragment_shader);
		~ShaderProgram();

	private:

	};
}