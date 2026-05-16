#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverse(vector<int>& arr, int low, int high)
    {
        while(low < high) swap(arr[low++], arr[high--]);
    }
    
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        k = k%n;
        
        reverse(arr, 0, n-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
    }
};
