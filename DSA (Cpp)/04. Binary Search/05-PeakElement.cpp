#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        if(arr.size() == 1) return 0;
        
        int low = 0, high = arr.size()-1;
        
        while(low <= high)
        {
            int mid = (high-low)/2 + low;
            
            if(mid == 0) {
                if(arr[mid] > arr[mid+1]) return mid;
                else return mid+1;
            }
            
            else if(mid == arr.size()-1 || arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
            
            else if(arr[mid-1] < arr[mid]) low = mid+1;
            
            else high = mid-1;
        }
        
        return -1;
    }
};

// Another approach (To avoid out of bound error, we can compare mid with mid+1 and mid-1 with mid instead of comparing mid with both mid-1 and mid+1)
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int low = 0, high = arr.size()-1;
        
        while(low < high)
        {
            int mid = (high-low)/2 + low;
            
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            
            else if(arr[mid] > arr[mid-1]) low = mid+1;
            
            else high = mid;
        }
        
        return low;
    }
};