#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int high,int mid)
{
    vector<int> vec;
    while(low<=high)
    {
        vec.push_back(arr[low]);
        low++;
    }
    while(high<low)
    {
        vec.push_back(arr[high]);
        high--;
    }
}

void MergeSort(int arr[],int low, int high )
{
    int mid = (low+high)/2;
    if(low>=high)
    {
        return;
    }
    MergeSort(arr,0,mid);
    MergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}

int main() 
{
    int n;
    cout<<"Enter array size: ";
    cin >>n;
    int arr[n];
    cout<<"Enter array elements";

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MergeSort(arr,0,n);

    cout <<"sorted array : ";

    for(auto it :arr)
    {
        cout << it;
    }
    return 0;

}