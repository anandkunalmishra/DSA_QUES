#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head1=new struct node[sizeof(struct node)];
    struct node *head2=new struct node[sizeof(struct node)];
    int n1,n2;
    cout<<"Enter the two Sizes"<<endl;
    cin>>n1>>n2;
    struct node *current1, *current2,*headfi1,*headfi2;
    current1=head1;
    current2=head2;
    headfi1=head1;
    headfi2=head2;
    cout<<"Enter the data of first linked list"<<endl;
    cin>>current1->data;
    current1->next=NULL;
    for(int i=0;i<n1-1;i++)
    {
        struct node *current1=new struct node[sizeof(struct node)];
        cin>>current1->data;
        current1->next=NULL;
        head1->next=current1;
        head1=current1;

    }
    cout<<"Enter the data of second linked list"<<endl;
    cin>>current2->data;
    current2->next=NULL;
    for(int i=0;i<n2-1;i++)
    {
        struct node *current2=new struct node[sizeof(struct node)];
        cin>>current2->data;
        current2->next=NULL;
        head2->next=current2;
        head2=current2;

    }
    struct node *dummyhead=new struct node[sizeof(struct node)];
    struct node *ptr3;
    ptr3=dummyhead;
    ptr3->next=NULL;
    while(headfi1!=NULL && headfi2!=NULL)
    {
        if((headfi1->data) < (headfi2->data)){
            ptr3->next=headfi1;
            headfi1=headfi1->next;
        }
        else {
            ptr3->next=headfi2;
            headfi2=headfi2->next;
        }
        ptr3=ptr3->next;
    }
    while(headfi1!=NULL)
    {
        ptr3->next=headfi1;
        headfi1=headfi1->next;
        ptr3=ptr3->next;
    }
    while(headfi2!=NULL)
    {
        ptr3->next=headfi2;
        headfi2=headfi2->next;
        ptr3=ptr3->next;
    }
    ptr3=dummyhead->next;
    while(ptr3!=NULL){
        cout<<ptr3->data<<" " ;
        ptr3=ptr3->next;
    }
    return 0;

}
