cmake_minimum_required(VERSION 3.17)
project(two_lock_algorithm)
find_package(Threads REQUIRED)
set(CMAKE_CXX_STANDARD 14)

add_executable(two_lock_algorithm main.cpp LockTwo.cpp LockTwo.h)
target_link_libraries(two_lock_algorithm ${CMAKE_THREAD_LIBS_INIT})