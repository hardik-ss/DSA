#include <bits/stdc++.h>
using namespace std;

void countDigits(int d) // O(log10(n))
{
    int c = 0;
    for (int i = 0; d > 0; i++)
    {
        d = d / 10;
        c = c + 1;
    }
    cout << c;
}
void log_countDigits(int n) // O(log10(n))
{
    n = log10(n) + 1;
    cout << n;
}
void revnum(int n)
{
    int rev = 0;
    if (n > INT16_MAX || n < INT16_MIN)
    {
        cout << -1;
    }
    else
    {
        while (n > 0)
        {
            int last_digit = n % 10;
            n = n / 10;
            rev = (rev * 10) + last_digit;
        }
        cout << rev;
    }
}
void isPalindrome(int x)
{
    int cpy = x;  // store copy of input to compare
    long rev = 0; // declare variable long to store reverse number and avoid overflow

    while (x > 0)
    {
        int last_digit = x % 10;
        rev = (rev * 10) + last_digit;
        x = x / 10;
    }
    if (rev == cpy)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
void armstrongno(int n)
{
    int cpy = n;
    int exp = log10(cpy) + 1;
    int arm = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        arm = arm + pow(last_digit, exp);
    }
    if (arm == cpy)
    {
        cout << "it is an armstrong no:" << endl;
    }
    else
        cout << "not an armstrong no" << endl;
}
void alldivisior(int n)
{
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i && n % (n / i) == 0)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
void check_primes(int n)
{
    int count = 0;
    /*for (int i = 1; i <= n; i++) // Brute force O(n)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }*/
    for (int i = 1; i * i <= n; i++) // O(sqrt(n))
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        cout << "not a prime no";
    }
    else
    {
        cout << "it is a prime no" << endl;
    }
}
void check_gcd(int n, int p)  //O(min(n1,n2))
{
    int min = 0;
    if (n > p)
    {
        int min = p;
    }
    else
        min = n;
    for (int i = min; i > 0; i--)
    {
        if (n % i == 0 && p % i == 0)
        {
            cout << "GCD of " << n << " and " << p << " is = " << i;
            break;
        }
    }
}
void euclideon_algo(int n1, int n2)  //O(log⌀(min(n1,n2)))
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2 << endl;
    else
        cout << n1 << endl;
}
int main()
{
    /*cout << "enter no : ";
    int n;
    cin >> n;
    // countDigits(n);
    // log_countDigits(n) ;
    // isPalindrome(n);
    // armstrongno(n);
    // alldivisior(n);
    // check_primes(n);*/
    // check_gcd(13, 17);
    int n1, n2;
    cout << "enter n1 : ";
    cin >> n1;
    cout << "enter n2 : ";
    cin >> n2;
    euclideon_algo(n1, n2);
    return 0;
}