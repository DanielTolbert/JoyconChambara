# add JoyconProcessing/*.h files to an executable
file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS src/*.h)
add_executable(JoyconProcessing ${SOURCES} ${HEADERS})

set_target_properties(JoyconProcessing PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(JoyconProcessing JoyShockLibrary)

