#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
int mini = INT_MAX;
int minimize(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }
    return maxi - mini - 2 * k;
}
int main()
{
    int arr[] = {1, 5, 8, 10};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minimize(arr, n, k) << endl;
}