#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int a[r - l + 1] = {0};
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            a[k] = arr[i];
            i++;
        }
        else
        {
            a[k] = arr[j];
            j++;
        }
        k++;
    }
    while (j < r)
    {
        a[k] = arr[j];
        j++;
        k++;
    }
    while (i <= mid)
    {
        a[k] = arr[i];
        i++;
        k++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = a[i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int arr[] = {1, 34, 56, 98, 4, 6, 7, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}