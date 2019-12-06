#include "gtest/gtest.h"
#include "Example.cpp"
TEST(Demo, Equals) {
	double res;
	res = add_numbers(1.0, 2.0);
	ASSERT_NEAR(res, 5.0, 1.0e-11);
}

