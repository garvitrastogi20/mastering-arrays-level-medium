#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,9,5,4,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target=14;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i==j) continue;
            if(arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                cout<<i<<" "<<j<<endl<<endl;
            }
        }
    }
    return 0;
}