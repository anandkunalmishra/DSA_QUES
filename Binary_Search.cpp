#include <bits/stdc++.h>
using namespace std;
int main()
{
    int keyelement,first_element=0;
    cout<<"Enter number of element"<<endl;
    int n;
    cin>>n;
    int end_element=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be found"<<endl;
    cin>>keyelement;
    while(first_element<=end_element)
      { 
        int middleelemnt=(end_element+first_element)/2;
        if(arr[middleelemnt]==keyelement)
        {
            cout<<"found at position "<<middleelemnt;
            break;
        }
        else if(keyelement<arr[middleelemnt])
        {
            end_element=middleelemnt-1;
        }
        else
        {
            first_element=middleelemnt+1;
        }}
        if(first_element>end_element)
        {
            cout<<"not found";
        }
        return 0;

}