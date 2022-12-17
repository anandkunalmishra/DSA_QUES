#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HashMap/input.txt","r",stdin);
    freopen("HashMap/input.txt","w",stdout);
    int t;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        int num;
        cin>>num;
        int x;
        unordered_map<int,int> m;
        for(int i=0;i<num;i++)
        {
            cin>>x;
            m[x]++;
        }

        int maxi=INT_MIN;
        int ans=-1;
        for(auto it:m)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans=it.first;
            }
        }
        v.push_back(ans);
    }

    for(auto c:v)
    {
        cout<<c<<endl;
    }

    
}