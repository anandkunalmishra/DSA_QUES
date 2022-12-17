#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int max = INT_MIN, numOnBoard = 0;
    for (int i = 0; i < n; i++)
    {
        int exit, enter;
        cin >> exit >> enter;
        numOnBoard -= exit;
        numOnBoard += enter;
        if (max < numOnBoard)
            max = numOnBoard;
    }
    cout << max;
}