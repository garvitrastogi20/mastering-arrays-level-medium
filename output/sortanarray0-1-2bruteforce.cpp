// in this problem, we have given an array.
// in that array, it consists only three integers 0 1 2
// example: {0,1,1,0,2,1,0,1,2}
// we have to sort this array

// brute force solution of the problem
// the solution will be most optimal sorting algo that is merge sort


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left= low;
    int right= mid+1;

    while(left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high;i++)
    {
        arr[i]= temp[i-low];
    }
}

void mergeSort(int arr[],int low, int high)
{
    if(low>=high) return;
    int mid= (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}


int main()
{
    int arr[]={1,0,0,1,2,0,1,1,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high= n-1;

    mergeSort(arr,low, high);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}