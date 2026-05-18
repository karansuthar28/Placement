#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int low = 0, high = arr.size()-1;
        
        while(low < high)
        {
            while(low < arr.size() && arr[low] != 1) low++;
            while(high >= 0 && arr[high] != 0) high--;
            
            if(low < high) swap(arr[low], arr[high]);
        }
    }
};