#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "b ";
        }
        for (int j = 1; j < n - (2 * i - n); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "e ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * n; j >= 2 * n - 2 * i; j--)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    int star;

    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
            star = i;
        else
            star = 2 * n - i;
        ;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int num;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            num = 0;

        else
            num = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << num << endl;
            num = 1 - num;
        }
        cout << endl;
    }
    cout << endl;
}
void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = 2; j < 2 * n - 2 * i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << n - j + 1;
        }
        cout << endl;
    }
}
void Alpha_hill(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {

            if (k >= i)
            {
                cout << ch--;
            }
            else
            {
                cout << ch++;
            }
        }
        for (int p = 0; p < n - i - 1; p++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void Alpha_Triangle_Pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c = 'E' - i; c <= 'E'; c++)
        {
            cout << c;
        }
        cout << endl;
    }
}
void diamond_window(int n)
{

    for (int i = 0; i < n; i++)
    {
        int change = 2 * i + 1;
        if (i > n / 2)
        {
            change = (2 * n - 2 * i + 1);
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int p = 1; p < 2 * n - (2 * i + 1); p++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void butterfly(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k <= (2 * n) - ((2 * i) + 1); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower half
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int p = 0; p < 2 * i; p++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    // pattern1(5);
    // pattern2(5);
    // pattern3(5);
    // pattern4(5);
    // pattern5(5);
    // pattern6(5);
    // pattern7(5);
    // pattern8(5);
    // pattern9(5);
    // pattern10(5);
    // pattern11(5);
    // pattern12(5);
    // Alpha_hill(5);
    // Alpha_Triangle_Pattern(5);
    // diamond_window(5);
    // butterfly(4);
    cout << endl;
    return 0;
}