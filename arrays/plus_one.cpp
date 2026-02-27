// Problem: Plus One
// Platform: LeetCode
// Difficulty: Easy
// Approach: Carry from right to left
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            nums[i]++;

            if (nums[i] < 10) {
                return nums;
            }

            nums[i] = 0;
        }

        nums.insert(nums.begin(), 1);
        return nums;
    }
};
