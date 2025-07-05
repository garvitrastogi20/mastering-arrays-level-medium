// in better solution,
// first we sort the array


#include<bits/stdc++.h>
using namespace std;
int longestconsecutivesequence(vector<int> a)
{
    sort(a.begin(), a.end());
    int n=a.size();
    int cnt=0;
    int longest=1;
    int lastsmall= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]-1== lastsmall)
        {
            cnt+=1;
            lastsmall= a[i];
        }
        else if(lastsmall!= a[i])
        {
            cnt=1;
            lastsmall=a[i];
        }
        longest= max(longest, cnt);
    }
    return longest;
}
int main()
{
    vector<int> a={3,3,3,2,2,1,4,2,100,101,100,102,101,100};
    int len=longestconsecutivesequence(a);
    cout<<len;
    return 0;
}