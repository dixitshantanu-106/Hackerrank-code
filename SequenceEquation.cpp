#include <bits/stdc++.h>
using namespace std;

void permutationEquation(vector<int> p) {
    vector<int> ans;
    vector<int> d = {0};
    d.insert(d.end(),p.begin(),p.end());
    int x = 1, i = 1;
    while(x <= d.size())
    {
        while(i <= d.size())
        {
            if(d[d[i]] == x)
            {
                printf("\np[%d] = %d p[p[%d]] = %d x = %d", i, d[i], i, d[d[i]], x);
                ans.push_back(i);
            }
            i++;
        }
        i = 1;
        x++;
    }
    for(int i = 0; i < ans.size(); i++)
        printf("\n%d",ans[i]);
}

int main()
{
    vector<int> p = {4, 3, 5, 1, 2};
    permutationEquation(p);
    return 1;
}