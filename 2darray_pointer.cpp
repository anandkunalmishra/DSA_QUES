#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<m*n;i++)
    {
        int row=i/m;
        int col=i%m;
        cin>>arr[row][col];

    }
    int *ptr=&arr[0][0];
    for(int i=0;i<n;i++)
    {  for(int j=0;j<m;j++)
      {   
         cin>>*(ptr +(i*m)+j);
      }
    }
    return 0;
}
