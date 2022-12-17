#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = pow(x, 2);
        int b = pow(y, 2);
        int z = a + b;
        if (x == 0 && y == 0)
            cout << "0" << endl;
        else if (isPerfectSquare(z))
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
}