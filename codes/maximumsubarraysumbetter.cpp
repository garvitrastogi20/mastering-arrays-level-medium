#include<bits/stdc++.h>
using namespace std;

int maxisum(vector<int> v, int n)
{
    int maxi= INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=v[j];
            maxi= max(sum, maxi);
        }
    }
    return maxi;
}


int main()
{
    vector<int> v={ -2,-3,4,-1,-2,1,5,-3};
    int n= v.size();

    int maxsum= maxisum(v, n);
    cout<<maxsum;
    return 0;
}


// time complexity of the code: O(N^2)
// space complexity of the code: O(1)