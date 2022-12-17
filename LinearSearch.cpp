#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int keyelement;
    cin>>keyelement;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==keyelement)
        {
            cout<<" found at position"<<i+1<<endl;
            break;
        }
        
    }
    if(i==n)
        cout<<"not found";
    return 0;
}
