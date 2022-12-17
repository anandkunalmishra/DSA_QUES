#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n == 1 || n % 2 == 0 || n % 3 == 0 && n != 2 && n != 3)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    if (!isprime(m))
    {
        cout << "NO";
        return 0;
    }
    int i;
    for (i = n + 1; i < m; i++)
    {
        if (isprime(i))
        {
            cout << "NO";
            break;
        }
    }
    if (i == m)
    {
        cout << "YES";
    }
    return 0;
}