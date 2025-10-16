#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
 {
    int rem=0,newno=0;
    for(int i=1;i<sizeof(x);i++)
    {
     rem=x%10;
     newno =(newno * 10)+rem;
     x=(int)(x/10);
    }
    return newno;
}

int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);

}