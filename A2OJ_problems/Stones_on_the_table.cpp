#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
        int a = i;
        if (str[i] == str[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {

                str[j] = str[j + 1];
                cout << str[j];
            }
            count++;
            n--;
            i = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    return 0;
}