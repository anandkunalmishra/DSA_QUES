/*Linked list program in c++ 
create by Anand Kunal Mishra
date : 24 september 2021 */
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void count_of_nodes(struct node *head)
{
    int count=0;
    if(head==NULL)
        cout<<"Linked List is Empty"<<endl;
    else 
    {
        struct node *ptr=NULL;
        ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
    }
    cout<<"The number of node is "<<count<<endl;
}
int main()
{
    struct node *head=new struct node[sizeof(struct node)];
    head->data=45;                                          //process to define a linked list
    head->next=NULL;

    struct node *current=new struct node[sizeof(struct node)];
    current->data=98;
    current->next=NULL;                                     //creating second link using new current pointer
    head->next=current;

    current =new struct node[sizeof(struct node)];
    current->data=42;                                       // creating the third link using link link method
    current->next=NULL;
    head->next->next=current;

    count_of_nodes(head);                                   //calling function to count the node 
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
    return 0;
}
