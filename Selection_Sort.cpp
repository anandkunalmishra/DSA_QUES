#include <bits/stdc++.h>
using namespace std;

#define INPUT "input.txt"
#define OUTPUT "output.txt"

void Selection_sort(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[min])
                min = i;
        }
        temp[i] = arr[min];
        arr[min] = INT_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
