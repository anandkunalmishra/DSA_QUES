#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // accepting the string in str variable
    string str;
    cin >> str;

    int i = 0;

    // checking whether the HQ9+ any one of it is present or not
    for (i = 0; i < str.size(); i++)
    {
        // checking if present
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES";
            break;
        }
    }

    // if i reaches end of string means not found
    if (i == str.size())
        cout << "NO";
    return 0;
}