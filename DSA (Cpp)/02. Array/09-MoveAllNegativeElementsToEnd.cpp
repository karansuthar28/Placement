#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> answer;
        
        for(int i = 0; i < arr.size(); i++)
            if(arr[i] >= 0) answer.push_back(arr[i]);
        
        for(int i = 0; i < arr.size(); i++)
            if(arr[i] < 0) answer.push_back(arr[i]);
            
        for(int i = 0; i < arr.size(); i++)
            arr[i] = answer[i];
    }
};