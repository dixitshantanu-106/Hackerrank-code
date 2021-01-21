#include<bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
    vector<int> count (arr.size(), 0);
    int max = 0, index;
    for(int i = 0; i < arr.size(); i++)
        count[arr[i]]++;
    for(int i = 0; i < count.size(); i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            index = i;
        }
        else if(count[i] == max)
            if(index < i)
                continue;
            else
                index = 1;
    }
    return index;
}


int main()
{
    vector<int> arr = {4, 4, 4, 1, 5, 3};
    printf("\nresult = %d",migratoryBirds(arr));
}