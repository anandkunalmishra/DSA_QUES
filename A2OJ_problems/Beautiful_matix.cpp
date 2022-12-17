#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int arr[5][5];
    for (int i = 0; i < 25; i++)
    {
        int row = i / 5;
        int col = i % 5;

        cin >> arr[row][col];
    }
    for (int i = 0; i < 25; i++)
    {
        int row = i / 5;
        int col = i % 5;

        if (arr[row][col] == 1)
        {
            cout << fabs(2 - row) + fabs(2 - col);
            break;
        }
    }

    return 0;
}