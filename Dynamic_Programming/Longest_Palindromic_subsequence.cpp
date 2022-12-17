#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int memo[100][100];

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
int lcs(string s1, string s2, int m)
{
    int dp[m + 1][m + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[m][m];
}
string revString(string s1)
{
    int n = s1.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s1[i], s1[n - i - 1]);
    }
    return s1;
}
int main()
{
    auto start = high_resolution_clock::now();
    memset(memo, -1, sizeof(memo));
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s1;
    cin >> s1;
    int n = s1.size();
    string s2 = revString(s1);
    cout << s1 << endl
         << s2 << endl;
    cout << lcs(s1, s2, n) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}