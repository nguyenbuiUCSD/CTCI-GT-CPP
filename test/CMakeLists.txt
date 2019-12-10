include(AddGoogleTest)

set(This ExampleTests)
set(Tests AllTest)

set(Sources
	ExampleTests.cpp
)

add_executable(${This} ${Sources})
add_executable(${Tests} AllTests.cpp)

target_link_libraries(${This} gtest gmock gtest_main Example)
target_link_libraries(${Tests} gtest gmock gtest_main Example)

add_test(NAME ${This} COMMAND ${This})
add_test(NAME ${Tests} COMMAND ${Tests})