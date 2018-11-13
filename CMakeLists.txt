cmake_minimum_required(VERSION 3.10)
project(mario)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(mario main.cpp SDL_Plotter.h Player.h)
target_link_libraries(mario SDL2main SDL2 SDL2_mixer)

