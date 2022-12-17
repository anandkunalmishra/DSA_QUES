#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int x;
        cin>>x;
        if(x<=1399)
            cout<<"Division 4";
        else if(x<=1599 && x>=1400)
            cout<<"Division 3";
        else if(x<=1899 && x>=1600)
            cout<<"Division 2";
        else 
            cout<<"Division 1"; 
   } 
}