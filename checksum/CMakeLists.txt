cmake_minimum_required(VERSION 3.16..3.26)

# Because I forget commands:
#   cmake .
#   cmake --build . --config Release

project(Checksum LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
	add_compile_options(
		/O2
		/W4
		/permissive-
		/Zc:__cplusplus
		/Zc:throwingNew
		/wd4324 # 'struct_name' : structure was padded due to __declspec(align())
		/wd4244 # 'argument' : conversion from 'type1' to 'type2', possible loss of data
		/wd4267 # 'var' : conversion from 'size_t' to 'type', possible loss of data
	)
else()
	add_compile_options(-O3 -Wall -Wextra -pedantic)
endif()


add_executable(checksum checksum.cpp)
add_executable(field_checksum field_checksum.cpp)
add_executable(gbid_checksum gbid_checksum.cpp)
add_executable(collisions collisions.cpp)
