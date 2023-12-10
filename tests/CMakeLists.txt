enable_testing()

add_executable(
  gof_patterns_test
  GofPatternsTest.cpp
  ../src/log/logger.cpp
  ../src/AppBuilder.cpp
  ../src/patterns/UnknownGofApp.cpp
  ../src/patterns/behavioral/memento/MementoGofApp.cpp
)

target_include_directories(gof_patterns_test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src/>
)

target_link_libraries(gof_patterns_test PRIVATE gtest_main
                                        PRIVATE project_options
                                        PRIVATE project_warnings
                                        PRIVATE log4cplusS)

include(GoogleTest)
gtest_discover_tests(gof_patterns_test)