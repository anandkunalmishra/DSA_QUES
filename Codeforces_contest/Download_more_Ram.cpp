#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        vector<pair<int, int>> m;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a[j] = x;
        }
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            b[j] = x;
        }
        for (int i = 0; i < n; i++)
        {
            m.push_back({a[i], b[i]});
        }
        sort(m.begin(), m.end(), [&](pair<int, int> &o, pair<int, int> &p)
             { return o.first < p.first; });
        int max = 0;
        while ((k >= m[max].first) && max < n)
        {
            k += m[max].second;
            max++;
        }
        cout << k << endl;
    }
}