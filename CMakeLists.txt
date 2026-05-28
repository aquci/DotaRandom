cmake_minimum_required(VERSION 3.16)

project(DotaRandom)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(DotaRandom
    src/main.cpp
    src/DotaItem.cpp
    src/BuildGenerator.cpp
    src/ItemDatabase.cpp
    src/UI.cpp
    src/Utils.cpp
)
