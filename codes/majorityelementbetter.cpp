// hashing is the better solution for the problem
// will create a hash map where element is the key and its count is the value

#include<bits/stdc++.h>
using namespace std;

int findmajority(vector<int> arr)
{
    map<int, int> mpp;
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it: mpp)
    {
        if(it.second> (arr.size()/2))
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={1,2,2,2,2,4,5};
    int find= findmajority(arr);
    cout<<find;
    return 0;
}


// TIME COMPLEXITY: O(n log n) + O(n)
// SPACE COMPLEXITY: O(n)