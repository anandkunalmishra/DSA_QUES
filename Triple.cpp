#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map <int,int> m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;  
        }
        int j;
        for(j=0;j<n;j++)
        {
            if(m[arr[j]]>=3)
                {
                    cout<<arr[j]<<endl;
                    break;
                }
        }
        if(j==n)
            cout<<"-1"<<endl;


    }
}