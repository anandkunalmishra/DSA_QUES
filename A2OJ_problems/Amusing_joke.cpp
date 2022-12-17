#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string guest,
        host, pile;
    int alphabet[26] = {0};
    int alpha[26] = {0};

    cin >> guest >> host >> pile;

    for (int i = 0; i < host.size(); i++)
    {
        if (host[i] >= 'A' || host[i] <= 'Z')
        {
            alphabet[host[i] - 'A']++;
        }
    }
    for (int i = 0; i < guest.size(); i++)
    {
        if (guest[i] >= 'A' || guest[i] <= 'Z')
        {
            alphabet[guest[i] - 'A']++;
        }
    }
    for (int i = 0; i < pile.size(); i++)
    {
        if (pile[i] >= 'A' || pile[i] <= 'Z')
        {
            alpha[pile[i] - 'A']++;
        }
    }
    int i;
    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] != alpha[i])
            break;
    }
    if (i == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}