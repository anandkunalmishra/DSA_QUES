#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    int c;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;

        cout<<c<<" ";
    }
    return 0;
}