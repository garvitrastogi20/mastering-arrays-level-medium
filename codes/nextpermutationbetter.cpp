// next permutation problem

// the number of ways in which we can arrange a set of integers
// suppose array given as: arr={3,2,1} ans will be [3 2 1]
// the number of ways in which we can arrange is n!
// where n is the number of elements

// permutation occurs in sorted order
// the permutation of elements [3 1 2 ] in dictionary(sorted order) order is:
// [1 2 3]
// [1 3 2]
// [2 1 3]
// [2 3 1]
// [3 1 2]
// [3 2 1]
// so in this code, we will generate next permutation of a given set of integers as per dictionary order

// for ex: if the series is given as [3 2 1]
// now no next is there, so it will jump to first one, i.e. [ 1 2 3]

// steps to solve the problem:

//1. Generate all permutations in sorted order
//2. Linear search the given one
//3. next index permtation is the answer


#include<bits/stdc++.h>
using namespace std;
 // this is a STL solution which is considered as better solution but the interviewer may ask to implement it.
vector<int> next_perm(vector<int> a)
{
    next_permutation(a.begin(), a.end());
    return a;
}

int main()
{
    vector<int> a= {3,1,2};
    vector<int> ans= next_perm(a);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return 0;
}