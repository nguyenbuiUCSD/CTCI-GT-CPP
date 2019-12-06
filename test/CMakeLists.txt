include(AddGoogleTest)

set(This ExampleTests)

set(Sources
	ExampleTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This}  gtest gmock gtest_main Example)

add_test(NAME ${This} COMMAND ${This})