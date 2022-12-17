#include <bits/stdc++.h>
using namespace std;
void towerofHanoi(int n,char frompeg,char topeg,char auxpeg )
{
    if(n==1)
    {
        cout<<"Move disk "<< n << " from position "<<frompeg<<" to "<<topeg<<endl;
        return;
    }
    towerofHanoi(n-1,frompeg,auxpeg,topeg);
    cout<<"Move disk " <<n<< " from position "<<frompeg<<" to "<<topeg<<endl;
    towerofHanoi(n-1,auxpeg,topeg,frompeg);
}
int main()
{
    int n;
    cin>>n;
    char frompeg = 'A';
    char topeg = 'B';
    char auxpeg = 'C';
    towerofHanoi(n,frompeg,topeg,auxpeg);
    return 0;

}