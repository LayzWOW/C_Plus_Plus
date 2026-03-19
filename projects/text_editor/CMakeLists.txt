cmake_minimum_required(VERSION 3.10)
project(MyGtkProject)

# 1. Use C++17 or later (Required for GTK4)
set(CMAKE_CXX_STANDARD 17)

# 2. Tell CMake to create the "map" for Neovim (clangd)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 3. Find GTKmm
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)

# 4. Create your executable
add_executable(todo_app main.cpp)

# 5. Link the GTK libraries and headers
target_include_directories(todo_app PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_libraries(todo_app ${GTKMM_LIBRARIES})
