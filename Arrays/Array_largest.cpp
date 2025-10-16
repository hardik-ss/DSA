#include <bits/stdc++.h>
using namespace std;

int brute_largest(int arr[],int n)  // O(NlogN)
{
    sort(arr,arr+n);
    return arr[n-1];
}

int better_largest(int arr[],int n) // O(N)
{
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest;
    return 0;

}

int main(){
    int arr[]={1,5,4,8,5,64,1,5,8,61,48,6,154,6,4,8,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //better_largest(arr,n);
    cout<< brute_largest(arr,n);
}