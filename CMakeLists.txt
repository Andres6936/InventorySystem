CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
PROJECT(SystemInventory VERSION 2020.4 LANGUAGES CXX)

ADD_EXECUTABLE(SystemInventory
        Main.cpp
        Source/Item.cpp
        Source/Shield.cpp
        Source/Inventory.cpp)

SET_TARGET_PROPERTIES(SystemInventory PROPERTIES CXX_STANDARD 17)