#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};
int main()
{   int n;
    cin>>n;
    struct node *head=new struct node[sizeof(struct node)];
    struct node *current,*headfi;
    current=head;
    headfi=head;
    cin>>current->data;
    current->next=NULL;
    for(int i=0;i<n-1;i++)
    {
        struct node *current=new struct node[sizeof(struct node)];
        cin>>current->data;
        current->next=NULL;
        head->next=current;
        head=current;
    }
    struct node *ptr,*temp;
    ptr=headfi;
    int k;
    cin>>k;
    if(k==n)
    {   temp=ptr;
        ptr=ptr->next;
        headfi=ptr;
        //delete(temp);
    }
    else
    {
        int i=0;
        while(i<(n-k-1))
        {
            ptr=ptr->next;
            i++;
        }
        temp=ptr->next;
        ptr->next=ptr->next->next;
        //delete(temp);
    }
    struct node *dum;
    dum=headfi;
    while (dum!=NULL)
    {
        cout<<dum->data<<" ";
        dum=dum->next;
    }
    
    return 0;
}