#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 0, high = n;
        
        while(low <= high)
        {
            int mid = (high-low)/2 + low;
            
            if(mid*mid == n) return mid;
            
            else if(mid*mid > n) high = mid-1;
            
            else low = mid+1;
        }
        
        return high;
    }
};

// Another approach (To avoid overflow of mid*mid, we can use mid == n/mid instead of mid*mid == n)
int mySqrt(int x) {
    // Your code here
    int low = 1, high = x;

    while(low <= high)
    {
        int mid = (high-low)/2 + low;

        if(mid == x/mid) return mid;
        else if(mid > x/mid) high = mid-1;
        else low = mid+1;
    }

    return high;
}