#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        int data1, data2, data3;
        cin >> data1 >> data2 >> data3;
        if ((data1 == data2 || data1 == data3) && data1 == 1)
        {
            count++;
        }
        else if ((data2 == data1 || data2 == data3) && data2 == 1)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}