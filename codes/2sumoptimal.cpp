// in this we will be using two pointer approach.
// only suitable if the output to the problem is yes or no

#include<bits/stdc++.h>
using namespace std;

string read(vector<int> arr, int n, int target)
{
    int left=0; // first index
    int right= n-1; // last index

    //for this we need sorted array
    sort(arr.begin(), arr.end());

    //now implement the logic

    while(left<right)
    {
        int sum= arr[left]+arr[right];
        if(sum==target)
        {
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    vector<int> arr={1,2,3,4,8,9};
    int n= arr.size();
    int target= 25;
    string result= read(arr, n,target);
    cout<<result<<endl;
    return 0;
}