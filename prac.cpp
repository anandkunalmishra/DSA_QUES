#include <bits/stdc++.h>
using namespace std;
using ll = long int;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        ll minSalary[N];
        for (int i = 0; i < N; i++)
        {
            cin >> minSalary[i];
        }
        vector<ll> offerdSalary;
        vector<ll> maxJobOffers;
        for (int i = 0; i < M; i++)
        {
            int data1, data2;
            cin >> data1 >> data2;
            offerdSalary.push_back(data1);
            maxJobOffers.push_back(data2);
        }
        vector<ll> copyOffers = maxJobOffers;
        vector<string> availComp(N);
        for (int i = 0; i < N; i++)
        {
            cin >> availComp[i];
        }
        ll sal = 0, can = 0;
        for (int i = 0; i < N; i++)
        {
            ll maxVal = 0;
            for (int j = 0; j < M; j++)
            {
                if (availComp[i][j] == '1' && maxJobOffers[j] > 0 && offerdSalary[j] >= minSalary[i])
                    maxVal = max(maxVal, offerdSalary[j]);
            }
            if (maxVal == 0)
                continue;
            for (int j = 0; j < M; j++)
            {
                if (availComp[i][j] == '1' && maxJobOffers[j] > 0 && offerdSalary[j] == maxVal && offerdSalary[j] >= minSalary[i])
                    maxJobOffers[j]--;
            }
            sal += maxVal;
            can++;
        }
        int count = 0;
        for (int i = 0; i < M; i++)
        {
            if (maxJobOffers[i] == copyOffers[i])
                count++;
        }
        cout << can << " " << sal << " " << count << " " << endl;
    }
    return 0;
}