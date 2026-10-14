cmake_minimum_required(VERSION 3.16)

project(Project LANGUAGES C)

add_executable(Parallax
	src/main.c
	src/framebuffer.c
)

target_include_directories(Parallax PRIVATE
	include
)

target_link_libraries(Parallax PRIVATE
	user32
	gdi32
)