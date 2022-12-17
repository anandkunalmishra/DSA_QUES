#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string a, b;
    cin >> a >> b;
    string str[a.length()];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            str[i] = '0';
        }
        else
            str[i] = '1';
    }
    for (int i = 0; i < a.length(); i++)
    {
        cout << str[i];
    }
    return 0;
}