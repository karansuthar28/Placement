// Leetcode (in-place)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, j = 1;
        int temp = nums[0];

        while(j < nums.size()) {
            if(temp != nums[j]) {
                temp = nums[j];
                nums[i] = temp;
                i++;
            }

            j++;
        }

        return i;
    }
};