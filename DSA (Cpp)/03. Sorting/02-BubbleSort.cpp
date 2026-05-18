#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i = 0; i < arr.size()-1; i++)
        {
            bool flag = false;
            
            for(int j = 0; j < arr.size()-i-1; j++)
            {
                if(arr[j+1] < arr[j]) {
                    swap(arr[j], arr[j+1]);
                    flag = true;
                }
            }   
            
            if(flag == false) return;
        }
    }
};