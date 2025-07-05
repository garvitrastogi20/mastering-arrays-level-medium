#include<bits/stdc++.h>
using namespace std;

int longestcons(vector<int> a, int n)
{
    if(n==0) return 0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    for(auto it: st)
    {
        if(st.find(it-1)==st.end())
        {
            int cnt=1;
            int x= it;
            while(st.find(x+1)!= st.end())
            {
                x=x+1;
                cnt=cnt+1;
            }
            longest= max(longest,cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a={4,4,3,3,2,5,1,1,101,103,102,100};
    int n= a.size();
    int len= longestcons(a,n);
    cout<<len;
    return 0;
}