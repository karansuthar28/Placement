#include <bits/stdc++.h>
using namespace std;

/*
bool comparison(pair<int, int> a, pair<int, int> b) {
    return (a.second < b.second);
}
*/

class Solution {
public:
    static bool comparison(pair<int, int> a, pair<int, int> b) {
        return (a.second < b.second);
    }

    int maxMeetings(vector<int>& start, vector<int>& end) {
        // code here
        vector<pair<int, int>> time;

        for(int i = 0; i < start.size(); i++)
        time.push_back({start[i], end[i]});

        sort(time.begin(), time.end(), comparison);

        int count = 0; // answer
        int finish = -1;

        for(int i = 0; i < time.size(); i++) {
            if(finish < time[i].first) {
                count++;
                finish = time[i].second; 
            }
        }

        return count;
    }
};