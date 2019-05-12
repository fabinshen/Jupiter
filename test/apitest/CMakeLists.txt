add_executable(ApiTest apitest.cpp)

target_link_libraries(ApiTest JupiterApi)

if (CMAKE_CROSSCOMPILING)
    add_test(NAME ApiTest COMMAND ${CMAKE_EMULATOR_COMMAND} ${CMAKE_EMULATOR_LIBRARY_PATH} ApiTest)
else()
    add_test(NAME ApiTest COMMAND ApiTest)
endif()

