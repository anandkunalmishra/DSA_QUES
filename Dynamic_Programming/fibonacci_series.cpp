#include <bits/stdc++.h>
using namespace std;

int fib(int arr[], int n)
{

    if (arr[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
            res = n;
        else
            res = fib(arr, n - 1) + fib(arr, n - 2);
        arr[n] = res;
    }
    return arr[n];
}
int main()
{
    int arr[100][100];
    memset(arr, -1, sizeof(arr));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << fib(arr, i) << " ";
    // }
    // cout << endl;
    return 0;
}