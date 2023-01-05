message("-- Linking JoyShockLibrary")
add_library(JoyShockLibrary JoyShockLibrary.dll JoyShockLibrary.h)
set_target_properties(JoyShockLibrary PROPERTIES LINKER_LANGUAGE CXX)