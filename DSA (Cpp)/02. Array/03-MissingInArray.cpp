#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int num = 0;
        
        for (int i = 0; i < arr.size(); i++)
            num = num ^ arr[i] ^ (i+1);
            
        return num^(arr.size()+1);
    }
};