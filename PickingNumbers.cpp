#include<bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    vector<int> counts;
    sort(a.begin(), a.end());
    int n = a.size();
    int i, j = 0, hold, count = 1;
    for(i = 1; i < n; i++)
    {
        hold = a[j];
        if(a[i] - hold <= 1)
            count++;
        else
        {
            counts.push_back(count);
            count = 1;
            j = i;
        }
    }
    if(counts.size() == 0)
        return count;
    sort(counts.begin(), counts.end());
    return counts.back();
}

int main()
{
    vector<int> arr = {3, 3, 3, 3, 3};
    printf("result = %d",pickingNumbers(arr));
}