#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void insertStart(struct Node **head, int data)
{
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
}
void printrev(struct Node *head)
{
    Node *temp = head;
    while (temp->prev != NULL)
    {
        cout << temp->data;
        temp = temp->prev;
    }
    cout << temp->data;
}
void display(Node *head)
{
    cout << head->data;
    display(head->prev);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    struct Node *head = new Node;
    int num;
    cin >> num;
    while (num--)
    {
        int data;
        cin >> data;
        insertStart(&head, data);
    }
    printrev(head);
    cout << endl;
    display(head);
}