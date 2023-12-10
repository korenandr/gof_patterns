cmake_minimum_required(VERSION 3.12)

project(gof-patterns VERSION 1.0)
include(cmake/StandardProjectSettings.cmake)
include(cmake/PreventInSourceBuilds.cmake)

# If you use static libs then change log4cplus name to log4cpusS in target_link_libraries command
option(BUILD_SHARED_LIBS "Choos shared or static libs building" OFF)
option(ENABLE_TESTING "Enable sest Builds" ON)

# Link this 'library' to set the c++ standard / compile-time options requested
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_20)

# Link this 'library' to use the warnings specified in CompilerWarnings.cmake
add_library(project_warnings INTERFACE)

# standard compiler warnings
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# sanitizer options if supported by compiler
include(cmake/Sanitizers.cmake)
enable_sanitizers(project_options)

# allow for static analysis options
include(cmake/StaticAnalyzers.cmake)

add_subdirectory(lib)
add_subdirectory(src)

if(ENABLE_TESTING)
    include(cmake/GoogleTests.cmake)
    add_subdirectory(tests)
endif()
