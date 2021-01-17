#include<bits/stdc++.h>
using namespace std;

void climbingLeaderboard(vector<int> ranked, vector<int> player) {    
    int rank = 1, n = ranked.size(), k = player.size(), j, pos = 0;
    vector<int> ranks (k);
    for(int i = 0; i < n; i++)
    {
        j = pos;
        while(j < k)
        {
            if(player[j] >= ranked[i])
            {
                printf("\nIN score %d has ranked %d", player[j], rank);
                ranks.push_back(rank);
                pos = j;
                j = k;
                ranked.insert(ranked.begin() + i, player[k]);
            }
            else
            {
                rank++;
                j++;
            }
        }
        printf("\nOUT score %d has ranked %d", player[j], rank);
        ranks.push_back(rank);
        rank++;
        ranked.insert(ranked.begin() + i, player[k]);
    }
    for(int i = 0; i < ranks.size(); i++)
        printf("\n%d", ranks[i]);
}

int main()
{
    vector<int> ranked = {100, 90, 90, 80, 75, 60};
    vector<int> player = {50, 65, 77, 90, 102};
    climbingLeaderboard(ranked, player);
}