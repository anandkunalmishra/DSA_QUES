#include <bits/stdc++.h>
using namespace std;
int printdecreasing(int n)
{   
    if(n==0) return 0;
    cout<<n<<endl;
    printdecreasing(n-1);
    return 0;

}
int main(){
    int n;
    cin>>n;
    printdecreasing(n);
    return 0;
}