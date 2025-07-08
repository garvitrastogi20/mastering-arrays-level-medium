// SPIRAL OF A MATRIX

// This problem don't have many solutions like brute force , better and optimal
// This problem only have one optimal solution.

#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> a, int n, int m)
{
    int top =0, bottom= n-1;
    int left=0, right= n-1;
    vector<int> ans;

    while(top<= bottom && left<= right)
    {
       // first we will go to right to make spiral
       for(int i= left;i<= right;i++)
       {
            ans.push_back(a[top][i]);
       } 
       top++;

       //now we will go from to right to bottom
       for(int i=top;i<= bottom;i++)
       {
            ans.push_back(a[i][right]);
       }
       right--;

       // now we will go from right to left
       for(int i=right;i>= left;i--)
       {
            ans.push_back(a[bottom][i]);
       }
       bottom--;

       // now will go from bottom to top
       for(int i= bottom; i>= top;i--)
       {
            ans.push_back(a[i][left]);
       }
       left++;
    }
    return ans;
}


int main()
{
    vector<vector<int>> a={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36}
    };
    int n= a.size();
    int m= a[0].size();
    vector<int> answ= spiral(a,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;  
}