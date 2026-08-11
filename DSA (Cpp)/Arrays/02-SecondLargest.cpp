#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = arr[0], secondMax = -1;
        
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] > max) {
                secondMax = max;
                max = arr[i];
            }
            
            else if(arr[i] > secondMax && arr[i] != max) secondMax = arr[i];
        }
        
        return secondMax;
    }
};