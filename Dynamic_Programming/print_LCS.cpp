#include <bits/stdc++.h>
using namespace std;
void print_lcs(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1]);
        }
    }
    int index = dp[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';
    int i = m, j = n;
    int count = 0;
    while (i > 0 && j > 0)
    {
        if (count == dp[m][n]) // for increasing efficiency
            break;
        else if (s1[i - 1] == s2[j - 1])
        {
            lcs[index - 1] = s1[i - 1];
            i--;
            j--;
            index--;
            count++;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    cout << "The LCS is " << lcs << endl;

    // for printing the DP array we do the below steps:-

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         cout << dp[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();
    print_lcs(s1, s2, m, n);
}