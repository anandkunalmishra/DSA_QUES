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
    string s,o;
    cin>>s>>o;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='G') s[i]='B';
    }
    for(int i=0;i<o.size();i++)
    {
        if(o[i]=='G') o[i]='B';
    }
    
    if(s==o) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}