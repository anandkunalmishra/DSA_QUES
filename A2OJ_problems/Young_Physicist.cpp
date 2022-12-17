#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    int x = 0, y = 0, z = 0;
    while (t--)
    {
        int data1, data2, data3;
        cin >> data1 >> data2 >> data3;
        x += data1;
        y += data2;
        z += data3;
    }
    if (x != 0 || y != 0 || z != 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}