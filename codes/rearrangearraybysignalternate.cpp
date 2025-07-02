// the alternate question of the same problem is :

//  start the array with positive number.
// if any of the positive or negative numbers are left, add them at the end without altering the order.


#include<bits/stdc++.h>
using namespace std;

vector<int> getansw(vector<int> arr,  int n)
{
    vector<int> pos, neg;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index= neg.size()*2;
        for(int i=neg.size(); i<pos.size();i++)
        {
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index= pos.size()*2;
        for(int i=pos.size(); i<neg.size();i++)
        {
            a[index]=neg[i];
            index++;
        }
    }
    return a;
}

int main()
{
    vector<int> arr={1,-2,3,6,5,-6,5};
    int n= arr.size();
    
    vector<int> ans= getansw(arr, n);
    for(auto it: ans)
    {
        cout<<it<<"  ";
    }
    return 0;
}