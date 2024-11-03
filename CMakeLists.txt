cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

option(BUILD_EXE "Build an Executable" TRUE)

project(sfmlimguitemplate)

find_package(fmt CONFIG REQUIRED)
find_package(hello-imgui CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

# find all the files within src
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")

if (BUILD_EXE)
    message("Building executable")
    add_executable(sfmlimguitemplate ${SOURCES})
else()
    message("Building library")
    add_library(sfmlimguitemplate STATIC ${SOURCES})
endif()

target_include_directories(sfmlimguitemplate PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

target_link_libraries(sfmlimguitemplate PRIVATE fmt::fmt)
target_link_libraries(sfmlimguitemplate PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(sfmlimguitemplate PRIVATE hello-imgui::hello_imgui)
target_link_libraries(sfmlimguitemplate PRIVATE sfml-system sfml-network sfml-graphics sfml-window sfml-audio)

