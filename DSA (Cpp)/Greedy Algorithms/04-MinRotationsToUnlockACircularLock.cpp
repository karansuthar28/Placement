#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rotationCount(int r, int d) {
        // code here
        int first, second, answer = 0;
        
        while(r) {
            first = r%10; 
            second = d%10;
            
            r = r/10; 
            d = d/10;
            
            int temp = abs(first-second);
            answer = answer + min(temp, 10-temp);
        }
        
        return answer;
    }
};