#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string s1, s2;
    cin >> s1 >> s2;
    int len;
    if (s1.size() >= s2.size())
    {
        len = s2.size();
    }
    else
        len = s1.size();
    int i;
    for (i = 0; i < len; i++)
    {
        if (tolower(s1[i]) == tolower(s2[i]))
        {
            continue;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << "-1";
            break;
        }
        else
            cout << "1";
        break;
    }
    if (i == len)
        cout << "0";

    return 0;
}