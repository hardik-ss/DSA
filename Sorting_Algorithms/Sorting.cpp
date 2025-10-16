#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) // O(n^2)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
void bubble_sort(int arr[], int n) // Worst: O(n^2) best: [O(n)] avg: [O(n^2)]
{
    for (int i = n - 1; i > 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
}
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}
int main()
{
    cout << "Enter Size of array ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);

    cout << "sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}