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
  while(t--)
  {
    int n;
    cin>>n;
    vector<string> v,w,x;
    unordered_map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        v.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        w.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        x.push_back(s);
    }
    int pv=0,pw=0,px=0;
    for(int i=0;i<n;i++)
    {
        if(m[v[i]]==1){
            pv+=3;
        }
        if(m[v[i]]==2){
            pv+=1;
        }
        if(m[w[i]]==1){
            pw+=3;
        }
        if(m[w[i]]==2){
            pw+=1;
        }
        if(m[x[i]]==1){
            px+=3;
        }
        if(m[x[i]]==2){
            px+=1;
        }

    }
    cout<<pv<<" "<<pw<<" "<<px<<" "<<endl;
    
  }

  return 0;
}