#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string str;
    cin >> str;
    int i;
    ll count = 0;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}