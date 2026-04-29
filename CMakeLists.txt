cmake_minimum_required(VERSION 3.15)

project(EmbeddedProject LANGUAGES C CXX)

# 指定 C 和 C++ 标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

# 添加源文件
file(GLOB_RECURSE SOURCES "src/*.c" "src/*.cpp" "*.cpp")

# 排除 CMake 自动生成的测试文件
list(FILTER SOURCES EXCLUDE REGEX "CMakeCXXCompilerId.cpp")

# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

# 如果需要链接 HAL 库，可以在这里添加
# target_link_libraries(${PROJECT_NAME} PRIVATE hal_library)

# 包含头文件目录
include_directories(${CMAKE_SOURCE_DIR}/include)
