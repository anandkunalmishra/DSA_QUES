#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2, int m, int n)
{
    int arr[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        arr[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        arr[i][0] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                arr[i][j] = 1 + arr[i - 1][j - 1];
            else
                arr[i][j] = max(arr[i][j - 1], arr[j][i - 1]);
        }
    }
    return arr[m][n];
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int m, n;
    m = s1.size();
    n = s2.size();
    int z = max(m, n);
    int y = min(m, n);
    int l = lcs(s1, s2, m, n);
    cout << "deletion: " << z - l;
    cout << endl;
    cout << "insertion: " << l - y;
}