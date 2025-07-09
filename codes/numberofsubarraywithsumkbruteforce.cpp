// NUMBER OF SUBARRAYS WITH SUM =K
// K is already given in the question
// subarrays: contiguous part of an array

// lets understand through an example:

// arr[]={1,2,3,-3,1,1,1,4,2,-3}
// k is given as 3

// so the number of subarrays in arr which gives sum =3

// 1 2              3 -3 1 1 1
// 1 2 3 -3         1 1 1
// 3                4 2 -3
// 2 3 -3 1         -3 1 1 1 4 2 -3
// so there are total 8 subarrays which gives sum =3

// for brute force solution
// first we generate all subarrays and then check

#include<bits/stdc++.h>
using namespace std;

int numofsubarray(int arr[], int n, int k)
{
    int cnt=0;
    for(int i= 0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int l=i;l<=j;l++)
            {
                sum= sum+arr[l];
            }
            if(sum==k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k= 3;

    int count= numofsubarray(arr,n,k);
    cout<<count<<" ";
    return 0;
}

// time complexity: O(N^3)
// space complexity: O(1)

