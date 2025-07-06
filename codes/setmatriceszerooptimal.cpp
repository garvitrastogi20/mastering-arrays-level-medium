#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeromatrix(vector<vector<int>> a, int n, int m)
{
    // int col[m]={0}; --> matrix[0][..]
    // int row[n]={0}; --> matrix[..][0]

    int col0=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                // mark the ith row
                a[i][0]=0;
                // mark the jth col
                if(j!=0)
                {
                    a[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                //check for row and col
                if(a[0][j]==0 || a[i][0]==0)
                {
                    a[i][j]=0;
                }
            }
        }
    }
    if(a[0][0] ==0)
    {
        for(int j=0;j<m;j++) a[0][j]=0;
    }
    if(col0==0)
    {
        for(int i=0;i<n;i++)
        {
            a[i][0]=0;
        }
    }
    return a;
}

int main()
{
    vector<vector<int>> a={
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1}
    };
    int n= a.size();
    int m= a[0].size();

    vector<vector<int>> ans= zeromatrix(a, n, m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}