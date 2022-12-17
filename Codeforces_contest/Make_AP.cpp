#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    int n = t;
    while (t--)
    {
        float arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        if ((arr[0] + arr[2]) / 2 == arr[1])
            cout << n - t << " YES" << endl;
        else if (arr[1] <= arr[])
    }
}