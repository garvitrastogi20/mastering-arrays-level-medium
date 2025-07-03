// in this we will given implementation of STL solution

// series: [2 1 5 4 3 0 0]
// steps:
// 1. Longer prefix match
// find the breakpoint where a[i]<a[i+1]
 
// 2. find > 1 but the smallest one so that you stay close
// 3. Try to place remaining in sorted order

// implementation:

#include<bits/stdc++.h>
using namespace std;

vector<int> nextper(vector<int> a)
{
    int n= a.size();
    int index= -1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            index= i;
            break;
        }
    }

    if(index==-1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for(int i=n-1;i>index;i--)
    {
        if(a[i]>a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }
    
    reverse(a.begin()+index+1, a.end());
    return a;
}
int main()
{
    vector<int> a={2,1,5,4,3,0,0};
    vector<int> ans= nextper(a);
    for(auto it: ans)
    {
        cout<< it<<" ";
    }
    return 0;
}