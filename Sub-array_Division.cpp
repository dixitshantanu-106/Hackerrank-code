#include<bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int sum = 0, count = m, i, waycount = 0;
    if(m == 1 && d == s[0])
        return 1;
    while((sum != d) && count != 0 && i < s.size() - 1)
    {
        sum += s[i];
        count--;
        i++;
        waycount++;
    }
    if(sum != d)
        waycount = 0;
    return waycount;
}

int main()
{
    int d = 10, m = 4;
    vector<int> s = {2, 2, 2, 1, 3, 2, 2, 3, 3, 1, 4, 1, 3, 2, 2, 1, 2, 2, 4, 2, 2, 3, 5, 3, 4, 3, 2, 1, 4, 5, 4};   
    printf("result = %d",birthday(s, d, m));
}