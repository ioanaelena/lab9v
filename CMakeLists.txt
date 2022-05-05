cmake_minimum_required(VERSION 3.21)
project(lab9v)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab910/Bilet)
include_directories(lab910/Money)
include_directories(lab910/Repo)
include_directories(lab910/Service)
include_directories(lab910/Tests)
include_directories(lab910/UI)

add_executable(lab9v
        lab910/Bilet/Bilet.cpp
        lab910/Bilet/Bilet.h
        lab910/Money/Money.cpp
        lab910/Money/Money.h
        lab910/Repo/IRepo.cpp
        lab910/Repo/IRepo.h
        lab910/Repo/RepoInFile.cpp
        lab910/Repo/RepoInFile.h
        lab910/Repo/RepoInMemory.cpp
        lab910/Repo/RepoInMemory.h
        lab910/Service/Service.cpp
        lab910/Service/Service.h
        lab910/Tests/Tests.cpp
        lab910/Tests/Tests.h
        lab910/UI/UI.cpp
        lab910/UI/UI.h
        lab910/main.cpp)
