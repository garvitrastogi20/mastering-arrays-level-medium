// we will first take transpose of a matrix and then we will reverse every row
// lets implement

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n= a.size();

    // lets transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    // reverse every row:
    for(int i=0;i<n;i++)
    {
        reverse(a[i].begin(), a[i].end());
    }

    // print rotated matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}