#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstOccurrence(vector<int>& arr, int x)
    {
        int low = 0, high = arr.size()-1;
        int first = -1;
        
        while(low <= high)
        {
            int mid = (high-low)/2 + low;
            
            if(arr[mid] == x)
            {
                first = mid;
                high = mid-1;
            }
            
            else if(arr[mid] > x)
                high = mid-1;
                
            else low = mid+1;
        }
        
        return first;
    }
    
    int lastOccurrence(vector<int>& arr, int x)
    {
        int low = 0, high = arr.size()-1;
        int last = -1;
        
        while(low <= high)
        {
            int mid = (high-low)/2 + low;
            
            if(arr[mid] == x)
            {
                last = mid;
                low = mid+1;
            }
            
            else if(arr[mid] > x) high = mid-1;
            
            else low = mid+1;
        }
        
        return last;
    }
    
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> answer;
        answer.push_back(firstOccurrence(arr, x));
        answer.push_back(lastOccurrence(arr, x));
        
        return answer;
    }
};