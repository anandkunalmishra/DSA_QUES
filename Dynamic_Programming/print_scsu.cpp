#include <bits/stdc++.h>
using namespace std;
string print_scsu(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + max(dp[i][j - 1], dp[i - 1][j - 1]);
        }
    }
    int i = m, j = n;
    string str;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            str.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            str.push_back(s2[j - 1]);
            j--;
        }
        else
        {
            str.push_back(s1[i - 1]);
            i--;
        }
    }
    while (i > 0)
    {
        str.push_back(s1[i - 1]);
        i--;
    }
    while (j > 0)
    {
        str.push_back(s2[j - 1]);
        j--;
    }
    reverse(str.begin(), str.end());

    // for
    //     printing the DP array we do the below steps : -

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[j][i] << " ";
        }
        cout << endl;
    }
    return str;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();
    cout << print_scsu(s1, s2, m, n);
}