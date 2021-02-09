# App sources
set(APP_SOUCES main.cc)

# Executable
add_executable(${MAIN} ${APP_SOUCES})                               # add all files of executable

# main Executable
target_link_libraries(${MAIN} PUBLIC ${LIBRARY_NAME})               # link library to project
target_include_directories(${MAIN} PUBLIC ${PROJECT_BINARY_DIR})     