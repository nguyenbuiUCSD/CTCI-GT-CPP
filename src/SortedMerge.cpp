#include "SortedMerge.hpp"
#include <iostream>

/*
 * input: l1, l2: array of ascending-sorted ints
 * output: void
 * usage: Merge 2 array of ascending-sorted ints into the second array
 *        Second array will be resize to fit the sum of inputs
 */
void SortedMerge::solution(std::vector<int>& l1, std::vector<int>& l2)
{
	int l1_ind = l1.size() - 1;
	int l2_ind = l2.size() - 1;
	int merg_ind = l1.size() + l2.size() - 1;

	l2.resize(int(merg_ind+1));

	// Merge 2 list until 1 empty
	while (l1_ind>=0 && l2_ind>=0){
		if ( l1[l1_ind] > l2[l2_ind]) {
			l2[merg_ind] = l1[l1_ind];
			--l1_ind;
		}
		else {
			l2[merg_ind] = l2[l2_ind];
			--l2_ind;
		}
		--merg_ind;
	}

	// Copy over the remaining l1
	if (l2_ind < 0 && l1_ind >= 0) {
		while (l1_ind >= 0) {
			l2[l1_ind] = l1[l1_ind];
			--l1_ind;
		}
	}
}
