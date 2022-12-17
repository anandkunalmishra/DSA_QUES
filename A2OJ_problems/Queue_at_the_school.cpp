#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int t;
    cin >> t;
    string pos;
    cin >> pos;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (pos[i] == 'B' && pos[i + 1] == 'G' && i + 1 < n)
            {
                char temp = pos[i];
                pos[i] = pos[i + 1];
                pos[i + 1] = temp;
                i++;
            }
        }
    }
    cout << pos;
    return 0;
}