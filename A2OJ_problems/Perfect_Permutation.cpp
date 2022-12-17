#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    if (n % 2 != 0)
    {
        cout << "-1";
        return 0;
    }
    if (n == 2)
    {
        cout << "2 1";
        return 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        arr[i] = n - i + 1;
    }

    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}