#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findMin(int n) {
        vector<int> coins = {10, 5, 2, 1};
        int notes = 0;
        // vector<int> answer;

        for(int i = 0; i < coins.size(); i++) {
            notes += n/coins[i];
            n %= coins[i];

            // while(notes--) answer.push_back(coins[i]);
        }

        return notes; 
        // return answer.size();
    }
};