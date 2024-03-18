# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию

cmake_minimum_required (VERSION 3.8)



set(CMAKE_CXX_COMPILER clang++)

set(PROJECT_NAME Seed)

project (${PROJECT_NAME})



add_subdirectory ("Engine")
