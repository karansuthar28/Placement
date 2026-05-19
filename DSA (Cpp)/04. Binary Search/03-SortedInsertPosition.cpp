#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int low = 0, high = arr.size()-1;
        
        while(low <= high)
        {
            int mid = (high-low)/2 + low;
            
            if(arr[mid] == k) return mid;
            
            else if(arr[mid] > k) high = mid-1;
            
            else low = mid+1;
        }
        
        return low;
    }
};