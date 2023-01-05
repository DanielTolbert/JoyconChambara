# add JoyconProcessing/*.cpp files to an executable
file(GLOB SOURCES src/*.cpp)
add_library(JoyconProcessing ${SOURCES})

target_link_libraries(JoyconProcessing JoyShockLibrary)

target_include_directories(JoyconProcessing
    PUBLIC "${PROJECT_BINARY_DIR}"
    PUBLIC "${PROJECT_SOURCE_DIR}/JoyShockLibrary"
)

