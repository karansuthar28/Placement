// Leetcode (in-place)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Method 1
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

    // Method 1
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;

        while(j < nums.size()) {
            if(nums[i] != nums[j])
            nums[++i] = nums[j];

            j++;
        }

        return i+1;
    }

    // Method 3: Using set
    int removeDuplicates(vector<int>& nums) {
        set<int> temp;
        int index = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }

        for(auto it = temp.begin(); it != temp.end(); it++) {
            nums[index++] = *it;
        }

        return temp.size();
    }
};