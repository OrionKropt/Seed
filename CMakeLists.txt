# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.


set(PROJECT_NAME Seed)
# Название проекта (.sln для VS)
project (${PROJECT_NAME})



# Включите подпроекты.
add_subdirectory ("Engine")
