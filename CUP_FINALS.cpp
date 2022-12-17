#include <iostream>
#define ll long long int
using namespace std;

int main()
{

    ll t;
    while (t--)
    {
        int x, y, D;
        cin >> x >> y;
        if ((max(x, y) - min(x, y)) <= D)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
