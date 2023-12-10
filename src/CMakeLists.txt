set(SOURCE_FILES
        Main.cpp
        AppBuilder.cpp
        TerminalApp.cpp
        log/logger.cpp
        patterns/UnknownGofApp.cpp
        patterns/behavioral/memento/MementoGofApp.cpp
        )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

file(GLOB configFile log/log4cplus_properties.ini)
file(COPY ${configFile} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(${PROJECT_NAME} PRIVATE project_options
                                      PRIVATE project_warnings
                                      PRIVATE cxxopts
				      PRIVATE log4cplusS)

install(TARGETS ${PROJECT_NAME})
install(FILES ${configFile} TYPE LOCALSTATE)
