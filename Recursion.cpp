#include <bits/stdc++.h>
using namespace std;

void print_name(int i,int n)
{
    if(i>n)
    {
        return ;
    }
    cout<<"sen ";
    print_name(i+1,n);
}
void print_asc(int i,int n)
{
    if(i>n)
    {
        return ;
    }
    cout<<i<<" ";
    print_asc(i+1,n);
}
void print_dsc(int i)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<" ";
    print_dsc(i-1);
}
void backtrack_asc(int n)
{
    if(1>n)
    return ;
    backtrack_asc(n-1);
    cout<<n<<" ";
}
void backtrack_dsc(int i,int n)
{
    if (1>n)
    return ;
    
    backtrack_dsc(i+1,n-1);
    cout<<i<<" ";
}
int factorial(int n)
{
    vector<int> vec;
    if(n==0)
    return 1;

    return n*factorial(n-1);
}

bool palindrome_str(int i,string n)
{
    if(i>=n.size()/2)
    return true;
    if(n[i]!=n[n.size()-i-1])
    return false;
    return palindrome_str(i+1,n);

}
int main()
{
    //cout<<"enter no : ";
    int n;
    //cin>>n;
    // print_name(1,n);
    // print_asc(1,n);
    // print_dsc(1,n);
    // backtrack_dsc(1,n);
    // cout<<factorial(n);
    cout<<palindrome_str(0,"mam");

    return 0;
}