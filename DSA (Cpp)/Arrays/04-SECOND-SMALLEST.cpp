#include <bits/stdc++.h>
using namespace std;    

class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int min = INT_MAX, secondMin = INT_MAX;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < min) {
                secondMin = min;
                min = arr[i];
            }
            
            // arr[i] >= min
            else if(arr[i] < secondMin && arr[i] != min) secondMin = arr[i];
        }
        
        if(secondMin == INT_MAX) return { -1 };
        
        return { min, secondMin };
    }
};