cmake_minimum_required(VERSION 3.0.0)
project(Logic-Gates VERSION 0.1.0)

include(CTest)
enable_testing()
cmake_policy(SET CMP0076 NEW)
set(CMAKE_SYSTEM_NAME Windows)

#SET(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
#SET(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
#SET(CMAKE_RC_COMPILER x86_64-w64-mingw32-windres)
#set(CMAKE_RANLIB x86_64-w64-mingw32-ranlib)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)
add_executable(Logic-Gates)
target_link_libraries(Logic-Gates sfml-graphics)

target_sources(Logic-Gates PRIVATE
    "main.cpp"
    "Object.cpp"
    "Button.cpp"
    "Finish.cpp"
)

add_subdirectory(Gate)
add_subdirectory(Level)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
