cmake_minimum_required(VERSION 3.10)

# specify the c++ standard
project(uatere)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# add sources to the current project
aux_source_directory(${PROJECT_SOURCE_DIR}/src/ SRC)

set (SOURCES
  ${SRC})

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} PUBLIC ncurses form panel menu)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/include")

# add warning level if gcc compiler
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
    -Wcast-align
    # -Werror
    -Wextra
    -Wformat-nonliteral
    -Wformat=2
    -Winvalid-pch
    -Wmissing-declarations
    -Wmissing-format-attribute
    -Wmissing-include-dirs
    -Wredundant-decls
    -Wredundant-decls
    -Wswitch-default
    -Wswitch-enum
    )
endif()

