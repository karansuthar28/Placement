#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i = 1; i < arr.size(); i++)
        {
            int j = i-1;
            int temp = arr[i];
            
            while(j >= 0)
            {
                if(arr[j] > temp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
                
                else break;
            }
            
            arr[++j] = temp;
        }
    }
};