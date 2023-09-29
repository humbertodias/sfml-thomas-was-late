cmake_minimum_required(VERSION 3.26)
project(Thomas_Was_Late)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

file(GLOB SOURCE src/*.cpp)
#file(GLOB HEADER inc/*.h)

find_package(SFML 2.5
        COMPONENTS
        system window graphics network audio REQUIRED)

add_executable(${PROJECT_NAME}
        ${SOURCE})

# Set include directory search paths
target_include_directories(${PROJECT_NAME}
        PRIVATE
        "${PROJECT_BINARY_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/inc"
)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

# Link executable to required SFML modules
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio)
