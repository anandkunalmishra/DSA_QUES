#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> l, r;
    for (int i = 0; i < n; i++)
    {
        int data1, data2;
        cin >> data1 >> data2;
        l.push_back(data1);
        r.push_back(data2);
    }
    int count0 = 0, count1 = 0, count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] == 0)
            count0++;
        else
            count1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 0)
            count_0++;
        else
            count_1++;
    }
    cout << min(count0, count1) + min(count_0, count_1);
    return 0;
}