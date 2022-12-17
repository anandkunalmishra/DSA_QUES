#include <bits/stdc++.h>
using namespace std;
int printincreasing(int n)
{   
    if(n==0) return 0;
    printincreasing(n-1);
    cout<<n<<endl;
    return 0;

}
int main(){
    int n;
    cin>>n;
    printincreasing(n);
    return 0;
}