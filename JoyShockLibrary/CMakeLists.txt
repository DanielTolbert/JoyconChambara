message("-- Linking JoyShockLibrary")
add_library(JoyShockLibrary JoyShockLibrary.lib)
set_target_properties(JoyShockLibrary PROPERTIES LINKER_LANGUAGE CXX)