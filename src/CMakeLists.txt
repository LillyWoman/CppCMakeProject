#My Library
set(LIBRARY_SOURCES      my_lib.cc)
set(LIBRARY_HEADERS      ${PROJECT_SOURCE_DIR}/inc/my_lib.h)
set(LIBRARY_INC_DIR      ${PROJECT_SOURCE_DIR}/inc/)

add_library(${LIBRARY_NAME} ${LIBRARY_SOURCES} ${LIBRARY_HEADERS})       # add library with it files
target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INC_DIR})    # add include directories to target (= library)
target_link_libraries(${LIBRARY_NAME} PUBLIC linalg)                    # add library linalg whiach was created by add_library
target_link_libraries(${LIBRARY_NAME} PUBLIC loguru)                    # add library luguro whiach was created by add_library
target_link_libraries(${LIBRARY_NAME} PUBLIC ${CONAN_CXXOPTS})
target_compile_features(${LIBRARY_NAME} PUBLIC cxx_std_17)
target_set_warnings(TARGET ${LIBRARY_NAME} ENABLE OFF AS_ERROR OFF)
