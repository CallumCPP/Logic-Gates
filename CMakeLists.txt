cmake_minimum_required(VERSION 3.0.0)
project(Logic-Gates VERSION 0.1.0)

include(CTest)
enable_testing()
cmake_policy(SET CMP0076 NEW)

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
