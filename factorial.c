#include <stdio.h>
typedef ll = long long int
void func(int n)
{
    
    if(n==0)
    {
        return;
    }
    func(n-1);
    printf("%d",n);
}
ll fact(int n)
{
    if(n==0 || n==1)
    {
            return 1;
    }
    return n*fact(n-1); 
}
int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    printf("\n");
    printf("%d",fact(n));
    
}