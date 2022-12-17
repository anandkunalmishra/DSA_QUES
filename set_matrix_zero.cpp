#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    vector<int> v;
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            cin>>arr[i][j];
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(arr[i][j]==0)
            {
                v.push_back(x);
            }

    for(int i=0;i<v.size();i++)
        for(int j=0;j<y;j++)
            arr[v[i]][j]=0;
    
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)    
            cout<<arr[i][j]<<" ";


}