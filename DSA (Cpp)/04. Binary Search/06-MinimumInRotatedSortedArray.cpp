#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size()-1;

        while(low < high)
        {
            int mid = (high-low)/2 + low;

            if(mid == 0) {
                if(arr[mid] < arr[mid+1]) return arr[mid];
                return arr[mid+1];
            }

            else if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) return arr[mid];

            else if(arr[mid-1] < arr[mid] && arr[mid]  > arr[arr.size()-1]) low = mid+1;

            else high = mid;
        }

        return arr[low];
    }
};

// Alternate Solution 
class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size()-1, minElement = arr[0];

        while(low <= high)
        {
            int mid = (high-low)/2 + low;

            // Left Part
            if(arr[mid] >= arr[0]) {
                low = mid+1;
            }

            // Right Part
            else {
                minElement = arr[mid];
                high = mid-1;
            }
        }

        return minElement;
    }
};