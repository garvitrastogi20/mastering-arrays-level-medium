#include<bits/stdc++.h>
using namespace std;

vector<int> find2sum(vector<int> arr, int n, int target)
{
    map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        int x= arr[i];
        int y= target-x;
        if(mpp.find(y)!= mpp.end())
        {
            return {x,y};
        }
        mpp[x]=i;
    }
    return {-1,-1};
}

int main()
{
    vector<int> arr= {1,3,7,5,2};
    int n= arr.size();
    int target=8;
    
    vector<int> index= find2sum(arr, n, target);
    for(auto it: index)
    {
        cout<<it<<"  ";
    }
    return 0;
}