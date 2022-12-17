#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string str;
    cin >> str;
    int len = str.length();
    int a = 0, b = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            a++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            b++;
    }
    if (a >= b)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    }
    return 0;
}