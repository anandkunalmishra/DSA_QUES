#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string str;
    cin >> str;
    vector<int> v;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+')
            v.push_back(str[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << "+";
    }
    cout << v[v.size() - 1];
    return 0;
}