#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    int x = 0;
    while (t--)
    {
        string str;
        cin >> str;

        if ((str[0] == str[1] || str[1] == str[2]) && str[1] == '+')
        {
            x++;
        }
        else
            x--;
    }
    cout << x;

    return 0;
}