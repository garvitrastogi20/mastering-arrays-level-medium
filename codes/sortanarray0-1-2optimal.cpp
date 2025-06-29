

//       DUTCH NATIONAL FLAG ALGORITHM
// three pointer approach: low, mid, high

//algorithm is revolving around three rules:
//-> [0 -> low-1]-> 0  -->extreme left
//-> [low-> mid-1] ->1
//-> [high+1-> n-1]-> 2 --> extreme right



// you will be thinking what about mid-> high
// in that place, 0,1,2 are present in unsorted manner


#include<bits/stdc++.h>
using namespace std;

void sortarray(int arr[], int n)
{
    int low=0, mid=0, high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[]={0,1,0,0,2,1,0,0,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);

    sortarray(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}

 