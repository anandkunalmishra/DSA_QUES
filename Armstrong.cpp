#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int temp=x;
    int sum=0;
    while(x>0)
    {
        int a=x%10;
        sum+=a*a*a;
        x/=10;
    }
    if(temp==sum)
        cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    return 0;
    
}