#include <bits/stdc++.h>
using namespace std;

int occurance(int arr[],int num)    // Brute force  O(QxN)
{
    int n=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==num)
        {
            n=n+1;
        }
    }
    return n;
}
int number_hash()
{
    int n;
    cout <<"Enter arr size\n";
    cin >> n;
    int arr[n];
    cout <<"Enter arr elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Precompute 
    int hash[n]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
        cout <<hash[i]<<"\t";
    }
    cout<<"enter number of times U want to find frequency=";
   // Fetch method
   int q;
   cin>>q;
   while(q--)
   {
    int num;
    cout<<"\nenter number";
    cin>>num;
    cout<<hash[num];
   }
   return 0;
}
int char_hash()
{
    cout<<"Enter string =";
    string s;
    cin>>s;
    
    //Precomputing
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;
    }

    cout<<"enter number of char u want to find";
    int n;
    cin>>n;
    while(n--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a'];
    }
    return 0;
}

int mpp()
{
    int n;
    cout <<"Enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements = ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        /* code */
        m[arr[i]]++;
    }
    for(auto it: m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    int q;
    cout<<"Enter no of elements ";
    cin >>q;
    while(q--)
    {
        int number;
        cout<<"Enter num = ";
        cin>>number;
        cout<<m[number]<<endl;
    }
    
    
    return 0;
}


int main()
{
    //cout<< occurance(arr,1);
    //number_hash();
    //char_hash();
    mpp();
    return 0;
}
