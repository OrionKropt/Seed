#pragma once

#include <string>

namespace Renderer {

	class ShaderProgram
	{
	public:
		ShaderProgram(const std::string& vertexShader, const std::string& fragmentShader);
		~ShaderProgram();

	private:

	};
}