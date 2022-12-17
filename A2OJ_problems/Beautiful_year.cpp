#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    cin >> str;
    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        result = result * 10 + (str[i] - '0');
    }
    cout << result;
}