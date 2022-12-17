#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v,w;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(i%2==0)
            {
                v.push_back(x);
            }
            else 
            {
                w.push_back(x);
            }
        }
        int even=odd=ev=od=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i])%2==0
                even++;
            else odd++;
        }
        for(int i=0;i<w.size();i++)
        {
            if(w[i]%2==0)
                ev++;
            else od++;
        }
        if((even==v.size() || odd==v.size()) && (ev==w.size() || od==w.size()))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}