cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(homework3-11-5)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(FugureLibrary SHARED Figure.h Figure.cpp Triangle.h Triangle.cpp Quadrangle.h Quadrangle.cpp Equil_triangle.h Equil_triangle.cpp Iso_triangle.h Iso_triangle.cpp Parallelogram.h Parallelogram.cpp Rectangle.h Rectangle.cpp Rhombus.h Rhombus.cpp Right_triangle.h Right_triangle.cpp Square.h Square.cpp)
add_executable(DynamicLibraryClientExe DynamicLibraryClient.cpp)
target_link_libraries(DynamicLibraryClientExe FugureLibrary)