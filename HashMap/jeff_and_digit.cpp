#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int len=m[5]-(m[5]%9);
    if(m[0]==0){
        cout<<"-1";
        return 0;
    }
    else if(m[5]<9){
        cout<<"0";
        return 0;
    }
    else 
    {
        while(len--)
        {
            cout<<"5";
        }
        for(int i=0;i<m[0];i++)
        {
            cout<<"0";
        }
    }
    return 0;

}