cmake_minimum_required(VERSION 3.12)

set(PROJECT         12_BenchmarkingAndLogging)
project(${PROJECT}_Project VERSION 1.0.0 LANGUAGES CXX)

#---------------------------------------------------------------------

#global cmake variable settings
set(CMAKE_CXX_STANDARD              17)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)

# Options
option(ENABLE_TESTING       "Enable a Unit Test build"      OFF)
option(ENABLE_BENCHMARKS    "Enable Benchmark build"        ON)

#cmake custom modules
set(CMAKE_MODULE_PATH       ${PROJECT_SOURCE_DIR}/cmake/)
include(Documentation)
if (ENABLE_TESTING)
    include(CTest)
endif()    

# cmake variables
set(MAIN            ${PROJECT}_Executable)
set(LIBRARY_NAME    ${PROJECT}_MyLib)
set(TEST_MAIN       ${PROJECT}_UnitTest)
set(BENCHMARK_MAIN  ${PROJECT}_benchmark)

# add conan libraraies
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)       # insert cmake code
conan_basic_setup()

add_subdirectory(${PROJECT_SOURCE_DIR}/external)
add_subdirectory(${PROJECT_SOURCE_DIR}/src/)
add_subdirectory(${PROJECT_SOURCE_DIR}/app/)

# add unit test
if (ENABLE_TESTING)
    enable_testing()
    add_subdirectory(${PROJECT_SOURCE_DIR}/tests/)
endif()    

# add benchmarks
if (ENABLE_BENCHMARKS)
    add_subdirectory(${PROJECT_SOURCE_DIR}/benchmarks/)
endif()    

