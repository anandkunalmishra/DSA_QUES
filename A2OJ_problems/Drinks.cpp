#include <bits/stdc++.h>
using namespace std;
using lld = long double;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    lld result = (lld)sum / (lld)n;
    cout << fixed;
    cout << setprecision(12) << result;
}