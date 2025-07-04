// LEADERS IN AN ARRAY:
// leaders mean that element: right of which every element is smaller than it.
// for example: [10,22,12,3,0,6]
// in this, right of 12 every thing is smaller, 12 is a leader
// similarly 22 is a leader
// and the last element is always a leader because nothing is there in right of it.


//1. Task is to collect all the leaders

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> a)
{
    int n= a.size();
    vector<int> answ;
    for(int i=0;i<n;i++)
    {
        bool leader= true;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                leader=false;
                break;
            }
        }
        if(leader==true)
        {
            answ.push_back(a[i]);
        }
    }
    return answ;
}
int main()
{
    vector<int> a={10,22,12,3,0,6};
    vector<int> ans= leaders(a);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return 0;
}

// time complexity will be: O(n^2)
// space complexity will be : O(n)