#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1,v2;
        int countv1=0,countv2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
            if(x==1) countv1++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x!=v1[i]) count++;
            v2.push_back(x);
            if(x==1) countv2++;
        }
        int diff=abs(countv2-countv1);
        if(diff==count) cout<<diff<<endl;
        else cout<<diff+1<<endl;

    }
}