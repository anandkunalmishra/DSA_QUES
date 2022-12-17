#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, B, x, y;
        cin >> n >> B >> x >> y;
        vector<ll> v;
        ll s = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s + x <= B)
            {
                v.push_back(s + x);
                s += x;
            }
            else
            {
                v.push_back(s - y);
                s -= y;
            }
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += v[i];
        }
        cout << sum;
        if (t >= 1)
            cout << endl;
    }

    return 0;
}
