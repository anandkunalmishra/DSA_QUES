#include <bits/stdc++.h>
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
    


}