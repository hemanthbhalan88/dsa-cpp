// Problem: Remove Element
// Platform: LeetCode
// Difficulty: Easy
// Approach: Two Pointers (overwrite valid elements)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[n] = nums[i];
                n++;
            }
        }

        return n;
    }
};
