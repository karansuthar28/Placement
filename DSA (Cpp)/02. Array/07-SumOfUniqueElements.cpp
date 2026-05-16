#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumUnique(vector<int> &arr) {
        // code here
        int temp;
        int sum = 0;
        bool flag;
        
        for(int i = 0; i < arr.size(); i++)
        {
            flag = false;
            temp = arr[i];
            
            for (int j = 0; j < arr.size(); j++)
            {
                if(i == j) continue;
                
                if(arr[j] == temp) 
                {
                    flag = true;
                    break;
                }
            }
            
            if(flag == false) sum += arr[i];
        }
        
        return sum;
    }
};