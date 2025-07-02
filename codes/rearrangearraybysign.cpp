// we have to rearrange the array elements by alternate array sign
// +ve -> -ve-> +ve-> -ve-> and so on
// for example,
// arr[]={3,1,-2,-5,2,-4}
// |
// | after rearranging
// _
// arr[]={3,-2,1,-5,2,-4}

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &v)
{
    int n= v.size();
    vector<int> answ(n,0);
    int posIndex=0, negIndex= 1;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
        {
            answ[negIndex]= v[i];
            negIndex+=2;
        }
        else{
            answ[posIndex]= v[i];
            posIndex+=2;
        }
    }
    return answ;
}

int main()
{
    vector<int> v={3,1,-2,-5,2,-4};
    vector<int> ans= rearrange(v);
    for(auto it: ans)
    {
        cout<<it<< " ";
    }
    return 0;
}