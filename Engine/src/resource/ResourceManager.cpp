#include "ResourceManager.h"
#include <iostream>


ResourceManager::ResourceManager(const std::string& executable_path)
{
    size_t found = executable_path.find_last_of("/\\");
    m_path = executable_path.substr(0, found);
}