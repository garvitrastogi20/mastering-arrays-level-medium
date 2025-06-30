#include<bits/stdc++.h>
using namespace std;

int findmajority(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }   
        if(cnt>n/2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int find= findmajority(arr,n);
    cout<<find;
    return 0;
    
}