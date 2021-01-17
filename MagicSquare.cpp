#include<bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    int rowflag = -1, colflag = -1, cost = 0;
    vector<int> sumrow (3,0);
    vector<int> sumcol (3,0);
    vector<int> diag (2,0);
    for(int i = 0; i < s.size(); i++)
        for(int j = 0; j < s[i].size(); j++)
        {
            if(i == 0)
                sumrow[0] += s[i][j];
            else if(i == 1)
                sumrow[1] += s[i][j];
            else if(i == 2)
                sumrow[2] += s[i][j];
            if(j == 0)
                sumcol[0] += s[i][j];
            else if(j == 1)
                sumcol[1] += s[i][j];
            else if(j == 2)
                sumcol[2] += s[i][j];
            if(i == j)
                diag[0] += s[i][j];
            if((i + j) == (s.size() - 1))
                diag[1] += s[i][j];
        }
    if(sumrow[0] != sumrow[1] && sumrow[1] == sumrow[2])
        rowflag = 0;
    else if(sumrow[1] != sumrow[0] && sumrow[0] == sumrow[2])
        rowflag = 1;
    else if(sumrow[2] != sumrow[0] && sumrow[0] == sumrow[1])
        rowflag = 2;
    if(sumcol[0] != sumcol[1] && sumcol[1] == sumcol[2])
        colflag = 0;
    else if(sumcol[1] != sumcol[0] && sumcol[0] == sumcol[2])
        colflag = 1;
    else if(sumcol[2] != sumcol[0] && sumcol[0] == sumcol[1])
        colflag = 2;
    cost = abs(sumrow[rowflag] - sumrow[rowflag-1]); 
    return cost;
}

int main()
{
    vector<vector<int>> s = {{4, 9, 2},
                            {3, 5, 7}, 
                            {8, 1, 5}};
    printf("\nCost = %d",formingMagicSquare(s));
}