#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = k * l / nl;
    int y = c * d;
    int z = p / np;
    if (x < y && x < z)
        cout << x / n;
    else if (y < z)
        cout << y / n;
    else
        cout << z / n;

    return 0;
}