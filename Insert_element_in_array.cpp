#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to insert";
    int Element;
    cin>>Element;
    cout<<"Enter the position to insert";
    int pos;
    cin>>pos;
    pos-=1;
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=Element;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
