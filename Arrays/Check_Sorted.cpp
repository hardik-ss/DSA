#include <bits/stdc++.h>
using namespace std;

int Check_Sorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else
        {
            return -1;
        }
    }
    return 1;
}

int main(){
    int arr[]={1,5,4,8,5,64,1,5,8,61,48,6,154,6,4,8,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    //better_largest(arr,n);

    for(auto it : arr)
    {
        cout << it <<" ";
    }
    cout <<endl;
    cout<< Check_Sorted(arr,n);
}