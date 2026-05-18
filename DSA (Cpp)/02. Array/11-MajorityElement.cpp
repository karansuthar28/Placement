#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, majority = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == majority) count++;
            else count--;

            if(count == 0)
            {
                count++;
                majority = nums[i];
            }
        }

        return majority;
    }
};