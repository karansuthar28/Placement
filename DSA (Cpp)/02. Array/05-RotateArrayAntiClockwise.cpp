#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverse(vector<int>& arr, int low, int high)
    {
        while(low < high) swap(arr[low++], arr[high--]);
    }
        
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d%n;
        
        reverse(arr, 0, n-1);
        reverse(arr, 0, n-d-1);
        reverse(arr, n-d, n-1);
    }
}; 