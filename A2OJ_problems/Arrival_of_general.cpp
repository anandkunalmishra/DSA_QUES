#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = INT_MAX, b = INT_MIN;
    int minm = INT_MAX;
    int maxm = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maxm)
        {
            if (arr[i] == maxm)
            {
                a = min(a, i);
            }
            else
                a = i;
            maxm = arr[i];
        }
        if (arr[i] <= minm)
        {
            if (arr[i] == minm)
            {
                b = max(b, i);
            }
            else
                b = i;
            minm = arr[i];
        }
    }
    if (a > b)
    {
        cout << a + n - b - 2;
    }
    else
        cout << a + n - b - 1;

    return 0;
}