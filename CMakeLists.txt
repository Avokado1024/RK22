# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Название проекта
project(FacadePattern)

# Установить стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавить исходные файлы
add_executable(FacadePattern src/main.cpp)

