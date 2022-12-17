#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i=0;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
            break;
        
    }
    if(i*i==num)
    {
        cout<<"Is Prime";
    }
    else 
        cout<<"Not Prime";
return 0;
}