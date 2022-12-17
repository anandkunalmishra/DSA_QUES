#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=new struct node[sizeof(struct node)];
    struct node *headfi,*ptr;
    ptr=head;
    int n;
    cin>>n;
    cin>>ptr->data;
    ptr->next=NULL;
    head->next=ptr;
    headfi=head;
    for(int i=0;i<n-1;i++)
    {
        struct node *ptr=new struct node[sizeof(struct node)];
        cin>>ptr->data;
        ptr->next=NULL;
        head->next=ptr;
        head=ptr;
    }
    ptr=head;
    
    int x=9;

    while(ptr!=NULL)
    {
        if(ptr->data==x)
        {
            cout<<"YES";
            break;
        }
        ptr=ptr->next;
    }
    if(ptr->next==NULL)
    {
        cout<<"NO";
    }
    

    return 0;
    
}
