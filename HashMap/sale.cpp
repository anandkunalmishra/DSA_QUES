#include<bits/stdc++.h>
using namespace std;
int cut_rod(vector<int> p,int n,vector<int> dp){
    if(dp[n]>0) return dp[n];
    if(n==0){
        return 0;
    }
    int q =INT_MIN;
    for(int i=1;i<=n;i++){
        q=max(q,p[i]+cut_rod(p,n-i,dp));
    }
    dp[n]=q;
    return q;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    vector<int>v;
    vector<int> dp(11,INT_MIN);
    v.push_back(0);
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<cut_rod(v,n,dp);
    
}