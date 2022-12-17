#include <bits/stdc++.h>
using namespace std;
int res = 0;
int longseq(string s1, string s2, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] = s2[n - 1])
        return 1 + longseq(s1, s2, m - 1, n - 1);
    else
        return max(longseq(s1, s2, m, n - 1), longseq(s1, s2, m - 1, n));
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
}