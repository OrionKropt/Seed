#pragma once

#include <string>

class ResourceManager {
public:

	 ResourceManager(const std::string& executablePath);
	//~ResourceManager() = delete;
	//ResourceManager() = delete;
private:
	 std::string m_path;
};