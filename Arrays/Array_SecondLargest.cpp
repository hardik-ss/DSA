#include <bits/stdc++.h>
using namespace std;

int brute_SLarge(int arr[],int n)
{
    sort(arr,arr+n);

    int largest = arr[n-1];
    int s_large = -1;
    
    for(int i=n-2; i>0; i--)
    {
        if (arr[i]<largest)
        {
            s_large= arr[i];
            break;
        }
    }
    cout << s_large;
}

int better_SLarge(int arr[],int n)
{
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    int Slarge= -1;

    for(int i=0 ;i< n ;i++)
    {
        if(arr[i]<largest && arr[i]>Slarge )
        {
            Slarge=arr[i];
        }
    }
    cout << Slarge;
}

int Optimal_Slarge(int arr[],int n)
{
    int largest=INT16_MIN;
    int slarge= -1;

    for(int i=1;i<n ;i++)
    {
        if(arr[i]>largest)
        {
            slarge=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slarge)
        {
            slarge=arr[i];
        }
    }
    cout << slarge;
}

int main()
{
    int arr[]={1,5,4,8,5,64,1,5,8,61,48,6,154,6,4,8,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    //brute_SLarge(arr,n);
   // better_SLarge(arr,n);
   Optimal_Slarge(arr,n);
}