#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        string arr;
        cin >> arr;
        if (X > Y)
            cout << Y << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}