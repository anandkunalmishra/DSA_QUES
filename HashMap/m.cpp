#include<bits/stdc++.h>
#define ll long long long long int
using namespace std;
void solve(){
    long long int n;
    cin>>n;
    string s;

    cin>>s;
    vector<long long int> res,vec;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        if(s[i]=='R'){
            sum+=(n-i-1);
        }
        else sum+=i;
        if(i<(n-i-1) && s[i]=='L')  vec.push_back(n-1-i-i);
        else if(i>(n-i-1) && s[i]=='R') vec.push_back(i+i+1-n);
    }
    sort(vec.rbegin(),vec.rend());
    long long int ans=0;
    long long int m= vec.size();
    for(long long int i=0;i<m;i++)
    {
        ans+=vec[i];
        res.push_back(sum+ans);
    }
    for(long long int i=m;i<n;i++)
    {
        res.push_back(sum+ans);
    }
    for(long long int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  long long int t;
  cin>>t;
  while(t--)
  {
    solve();
  }

  return 0;
}