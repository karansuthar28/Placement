#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Method 1
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int n = prices.size();
        int groups = (n-1)/(k+1) + 1;
        int minAmt = 0, maxAmt = 0;
        
        sort(prices.begin(), prices.end());
        
        for(int i = 0; i < groups; i++) minAmt += prices[i];
        for(int i = 0; i < groups; i++) maxAmt += prices[n-1-i];
        
        return {minAmt, maxAmt};
    }

    // Method 2
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int n = prices.size();
        int minAmt = 0, maxAmt = 0;
        int low = 0, high = n-1;
        
        // Sort the array 'prices'
        sort(prices.begin(), prices.end());
        
        while(low <= high) {
            minAmt += prices[low++];
            high = high - k;
        }
        
        low = 0, high = n-1;
        
        while(low <= high) {
            maxAmt += prices[high--];
            low += k;
        }
        
        return {minAmt, maxAmt};
    }
};