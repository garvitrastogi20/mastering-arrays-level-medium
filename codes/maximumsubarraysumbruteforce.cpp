

// SUBARRAY-> contiguous part of an array

#include<bits/stdc++.h>
using namespace std;

int maxisum(vector<int> v, int n)
{
    int maxi= INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<j;k++)
            {
                sum+=v[k];
                maxi= max(sum, maxi);
            }
        }
    }
    return maxi;
}


int main()
{
    vector<int> v={ -2,-3,4,-1,-2,1,5,-3};
    int n= v.size();
    int maxsum= maxisum(v,n);
    cout<<maxsum<<endl;
    return 0;
}


// time complexity of the code: O(N^3)
// space complexity of the code: O(1)