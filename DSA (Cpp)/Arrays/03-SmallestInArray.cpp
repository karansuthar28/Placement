#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int min = arr[0];
        
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] < min) min = arr[i];
        }
        
        return min;
    }
};
