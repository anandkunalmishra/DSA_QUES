#include <bits/stdc++.h>

#define ll long long
#define INPUT "input.txt"
#define OUTPUT "output.txt"

using namespace std;

int main()
{

    ll n;
    cin >> n;
    int arr[100005];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll m;
    cin >> m;
    ll Vas = 0, Pet = 0;

    while (m--)
    {
        int b;
        cin >> b;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == b)
            {
                Vas += i + 1;
                Pet += n - i;
                break;
            }
        }
       
    }
    cout << Vas << " " << Pet;

    return 0;
}
