// ROTATE MATRIX BY 90 DEGREE
// in this problem we will be given a matrix and we have to rotate the matrix by 90 degree.
// "IN CLOCKWISE DIRECTION"

// for example: let suppose a matrix:
// 1   2   3   4           13   9   5   1 
// 5   6   7   8           14   10  6   2
// 9   10  11  12   -->    15   11  7   3
// 13  14  15  16          16   12  8   4   

// observe all the index

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(a[0])/sizeof(a[0][0]);
    int ans[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[j][n-1-i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Time complexity: O(n^2)
// space complexity : O(n^2)
