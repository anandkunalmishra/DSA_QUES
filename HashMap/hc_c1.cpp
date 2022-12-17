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
    string s;
    cin>>s;
    if(s.size()!=5)
    {
      cout<<"NO"<<endl;
      continue;
    }
    set<char> st;
    for(int i=0;i<n;i++)
    {
      st.insert(s[i]);
    }
    if(st.size()!=5){
      cout<<"NO"<<endl;
      continue;
    }
    int count=0;
    for(auto it:s)
    {
      if(it=='T' || it=='i' || it=='m' || it=='u' || it=='r')
      {
        count++;
      }
    }
    if(count==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}