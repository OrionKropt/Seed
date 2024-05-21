#pragma once

#include <string>

class ResourceManager {
public:

	 ResourceManager(const std::string& executable_path);
	//~ResourceManager() = delete;
	//ResourceManager() = delete;
private:
	 std::string m_path;
};