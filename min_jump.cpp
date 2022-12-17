#include <bits/stdc++.h>
using namespace std;
int min_jump(int arr[], int n)
{
    int maxR = arr[0];
    int step = arr[0];
    int jump = 1;
    if (n == 1)
        return 0;
    else if (arr[0] == 0)
        return -1;
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                return jump;

            maxR = max(maxR, i + arr[i]);
            step--;
            if (step == 0)
            {
                jump++;
                if (i >= maxR)
                {
                    return -1;
                }
                step = maxR - i;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[] = {2, 3, 4, 1, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << min_jump(arr, n) << endl;
}