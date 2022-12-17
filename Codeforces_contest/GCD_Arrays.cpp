#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define fo1(i, n) for (int i = 1; i < n; i++)
#define ll long long
#define ull unsigned ll
#define deb(x) cout << #x <<= << x << endl
#define all(x) x.begin(), x.end()
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        if (l == r && l == 1)
            cout << "NO" << endl;
        else if (l == r && l > 1)
            cout << "YES" << endl;
        else
        {
            long long int g = r - l + 1;
            long long int p = (r / 2) - ceil((float)l / 2) + 1;
            if (k >= g - p)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}