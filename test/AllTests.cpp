#include "gtest/gtest.h"
#include "Example.cpp"
#include "SortedMerge.hpp"

TEST(Demo, Equals) {
	double res;
	res = add_numbers(1.0, 2.0);
	ASSERT_NEAR(res, 3.0, 1.0e-11);
}

TEST(TEST_SORTED_MERGE, NONE_EMPTY_SORTED_MERGE) {
	std::vector<int> l1 = { 1,3,5,7,9};
	std::vector<int> l2 = { 0,2,4,6,8};
	std::vector<int> res = { 0,1,2,3,4,5,6,7,8,9};
	SortedMerge sortedMerge;
	sortedMerge.solution(l1, l2);

	for (int i = 0; i < res.size();i++) {
		EXPECT_EQ(res[i], l2[i]);
	}
}