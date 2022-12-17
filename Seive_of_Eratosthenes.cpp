#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n == 1 || n % 2 == 0 || n % 3 == 0)
        return false; // isprime function is used to check whether a number is prime or not
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void printPrime(int n)
{
    vector<bool> arr(n + 1, true); // to fill all element with value true

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i])
        { //....another method to do but long code
            for (int j = 2 * i; j <= n + 1; j += i)
            {
                arr[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]) //           .........
        {
            cout << i << " ";
        }
    }
    // for (int i = 2; i < n; i++)
    // {
    //     if (arr[i])
    //     {
    //         cout << i << " ";
    //         for (int j = i * i; j < n; j += i) // less code but same complexity
    //         {
    //             arr[j] = false;
    //         }
    //     }
    // }
}
int main()
{
    freopen("/Users/anandkunalmishra/DS&Algo/A2OJ_problems/input.txt", "r", stdin);
    freopen("/Users/anandkunalmishra/DS&Algo/A2OJ_problems/output.txt", "w", stdout);
    int n;
    cin >> n;
    printPrime(n);
}