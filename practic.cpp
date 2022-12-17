#include <bits/stdc++.h>
using namespace std;
void sortArray(int arr[],int n)
{
    if (n<=1)
        return;
    sortArray(arr,n-1);
    int lastelement=arr[n-1];
    int temp=n-2;
    while((temp>=0) && (arr[temp]>lastelement))
    {
        arr[temp+1]=arr[temp];
        temp--;
    }
    arr[temp+1]=lastelement;
}
int main()
{
    int arr[]={3 ,-7 ,9 ,-2 ,5};
    cout<<"array before sorting ";
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"array after sorting ";
    sortArray(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}