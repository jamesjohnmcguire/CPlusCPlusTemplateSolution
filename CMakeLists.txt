cmake_minimum_required(VERSION 3.10)
project(TemplateSolution)

# Platform-agnostic settings
set(CMAKE_CXX_STANDARD 20)

# Library and app subdirectories
add_subdirectory(TemplateLibrary)
add_subdirectory(TemplateConsoleApplication)
