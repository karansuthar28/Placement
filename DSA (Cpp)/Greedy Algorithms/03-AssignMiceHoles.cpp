#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int answer = 0;
        sort(mices.begin(), mices.end());
        sort(holes.begin(), holes.end());
        
        for(int i = 0; i < mices.size(); i++) {
            answer = max(answer, abs(mices[i] - holes[i]));
        }
        
        return answer;
    }
};