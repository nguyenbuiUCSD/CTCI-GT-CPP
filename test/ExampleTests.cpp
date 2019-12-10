#include "gtest/gtest.h"
#include "Example.cpp"
TEST(Example_test, Equals_test) {
	double res1;
	res1 = add_numbers(1.0, 2.0);
	ASSERT_NEAR(res1, 3.0, 1.0e-11);
}

