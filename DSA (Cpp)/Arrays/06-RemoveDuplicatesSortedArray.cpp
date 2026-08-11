// GFG (out-place)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> answer;
        int temp = arr[0];
        answer.push_back(temp);
        
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] != temp) {
                temp = arr[i];
                answer.push_back(temp);
            }
        }
        
        return answer;
    }
};