#include<bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr) {
    int deletions = 0, max = 0, index;
    vector<int> count (arr.size(), 0);
    for(int i = 0; i < arr.size(); i++)
        count[arr[i]]++;
    for(int i = 0; i < count.size(); i++)
        if(count[i] > max)
        {
            max = count[i];
            index = i;
        }
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] != index)
            deletions++;
    return deletions;   
}

int main()
{
    vector<int> arr = {3, 3, 2, 1, 3, 4, 4, 4, 4,7};
    printf("\nresult = %d",equalizeArray(arr));
}