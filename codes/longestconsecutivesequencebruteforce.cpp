// LONGEST CONSECUTIVE SEQUENCE:

// suppose we have an array: {4,100,102,3,2,1,101,1,1,104}
// okay now you will look about which is longest consecutive sequence in the array
// so in the list, we have 100,101,102 (also 104 but we dont have 103 to count it in sequence)
// length of the sequence: 3
// look for another: we have 1,2,3,4
// they are consecutive sequence of integers
// length of the sequence: 4
// so the longest consecutive sequence is: 4

#include<bits/stdc++.h>
using namespace std;

int longestconsecutivesequence(int arr[],int n)
{
    int longest =0;
    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int count =1;
        while(find(arr,arr+n,current+1)!=arr+n) // only used with arrays, not with vectors
        {
            current++;
            count++;
        }
        longest= max(longest, count);
    }
    return longest;
}

int main()
{
    int arr[]={4,100,102,3,2,1,101,1,1,104};
    int n= sizeof(arr)/sizeof(arr[0]);
    int len= longestconsecutivesequence(arr,n);
    cout<< len;
    return 0;
}


// time complexity will be: O(n^2)
// space complextiy will be: O(1)