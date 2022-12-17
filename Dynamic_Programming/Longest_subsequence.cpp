/*
Longest Common subsequence
by Anand Kunal Mishra

Recursive method
 */

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int memo[100][100];

// int lcs(string s1, string s2, int m, int n)
// {
//     if (m == 0 || n == 0)
//         return 0;
//     if (s1[m - 1] == s2[n - 1])
//         return 1 + lcs(s1, s2, m - 1, n - 1);
//     else
//         return max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
// }
/* BY Recursion we do like above */

// int lcs(string s1, string s2, int m, int n)
// {
//     if (memo[m][n] != -1)
//     {
//         return memo[m][n];
//     }
//     else if (m == 0 || n == 0)
//         memo[m][n] = 0;
//     else if (s1[m - 1] == s2[n - 1])
//         memo[m][n] = 1 + lcs(s1, s2, m - 1, n - 1);
//     else
//         memo[m][n] = max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
//     return memo[m][n];
// }
/* Above is the memoization method  */

int lcs(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}
/* Above is the Tabulation Method  */
int main()
{
    memset(memo, -1, sizeof(memo));
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int m, n;
    m = s1.length();
    n = s2.length();
    auto start = high_resolution_clock::now();
    cout << lcs(s1, s2, m, n) << endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}