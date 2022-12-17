#include <bits/stdc++.h>
using namespace std;
void getUnion(int a1[], int n, int a2[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a1[i]);
    for (int i = 0; i < m; i++)
        s.insert(a2[i]);
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}
void getintersection(int a1[], int n, int a2[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a1[i] == a2[j])
                s.insert(a1[i]);
        }
    }
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";
}

int main()
{
    int a[] = {5, 3, 4, 5, 6, 7};
    int b[] = {5, 6, 7, 8, 9};
    // getUnion(b, sizeof(b) / sizeof(b[0]), a, sizeof(a) / sizeof(a[0]));
    getintersection(b, sizeof(b) / sizeof(b[0]), a, sizeof(a) / sizeof(a[0]));
}