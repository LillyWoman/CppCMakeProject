# linalg libraray
set(LIBRARY_INCLUDE_DIR    "linalg")
add_library(linalg INTERFACE)
target_include_directories(linalg SYSTEM INTERFACE ${LIBRARY_INCLUDE_DIR})

#loguro
set(LOGURU_SOURCES "loguru/loguru.cpp")
set(LOGURU_HEADERS "loguru/loguru.hpp")
set(LOGURU_INCLUDES "loguru/")

add_library(loguru ${LOGURU_SOURCES} ${LOGURU_HEADERS})
target_include_directories(loguru PUBLIC ${LOGURU_INCLUDES})