
//   MOORE'S VOTING ALGORITHM

// 1. apply moore's voting algo(revolve around element and count)
// 2. verify that the element that you got is majority or not


#include<bits/stdc++.h>
using namespace std;

int findmajority(vector<int> arr)
{
    int cnt=0;
    int el;
    for(int i=0;i<arr.size(); i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el= arr[i];
        }
        else if(arr[i] == el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==el)
        {
            cnt1++;
        }
    }
    if(cnt1> (arr.size()/2))
    {
        return el;
    }
    return -1;
}


int main()
{
    vector<int> arr={7,7,5,7,6,1,7,7,7,7,2,6};
    int find= findmajority(arr);
    cout<<find;
    return 0;
}