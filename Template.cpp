#include <bits/stdc++.h>
using namespace std;
template <class T>
T minimum(T x, T y)
{
    return x < y ? x : y;
}
template <class T>
T maximum(T x, T y)
{
    return x > y ? x : y;
}
template <class T, class R>
void add(T x, R y)
{
    cout << x + y;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << maximum(12, 14) << endl;
    cout << maximum('A', 'K') << endl;
    add(10, 12.9);
}
