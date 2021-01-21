#include<bits/stdc++.h>
using namespace std;

void circularArrayRotation(vector<int> a, int k, vector<int> queries) 
{
    int end, temp, temp2, i = 0, count = 0, j = 0;
    while(k != 0)
    {
        end = a[a.size() - 1];
        temp = a[i];
        a[i] = end;
        i++;
        count++;
        while(count < a.size())
        {
            temp2 = a[i];
            a[i] = temp;
            temp = temp2;
            count++;
            j += count;
            i++;
        }
        i = 0;
        count = 0;
        k--;
    }
    vector<int> ans (queries.size(), 0);
    for(i = 0; i < queries.size(); i++)
        ans[i] = a[queries[i]];
    for(i = 0; i < ans.size(); i++)
        printf("%d ",ans[i]);
    printf("\nj = %d, size of a = %d",j, int(a.size()));
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> q = {0, 1, 2};
    circularArrayRotation(a, 1, q);
}