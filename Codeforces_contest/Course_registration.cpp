#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        if (abs(M - K) >= N)
        {
            cout << "Yes";
        }
        else
            cout << "No";
    }
    return 0;
}