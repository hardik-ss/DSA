#include <bits/stdc++.h>
using namespace std;

int Second_smallest(int arr[], int n)    //O(N)
{
    int smallest=arr[0];
    int s_s = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            s_s=smallest;
            smallest=arr[i];         
        }

        if(arr[i]!=smallest && arr[i]<s_s)
        {
            s_s=arr[i];
        }
    }
    return s_s;
}

int main()
{
    int arr[]={1,5,4,8,5,64,1,5,8,61,48,6,154,6,4,8,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(auto it : arr)
    {
        cout<<it<<" ";
    }

    cout<<endl;

    cout<<Second_smallest(arr,n);
}