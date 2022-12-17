#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    cin >> str;
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            result += '0';
        if (str[i] == '-' && str[i + 1] == '.')
        {
            result += '1';
            i++;
        }
        if (str[i] == '-' && str[i + 1] == '-')
        {
            result += '2';
            i++;
        }
    }
    cout << result;

    return 0;
}