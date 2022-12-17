#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string bookTitle;
    string authorName;
    string publisherName;
    int yearOfPublication;
    int ISBN;
    int price;

    Node *prev;
    Node *next;

    Node(string bookTitle, string authorName, string publisherName, int yearOfPublication, int ISBN, int price)
    {
        this->bookTitle = bookTitle;
        this->authorName = authorName;
        this->publisherName = publisherName;
        this->yearOfPublication = yearOfPublication;
        this->ISBN = ISBN;
        this->price = price;

        this->prev = NULL;
        this->next = NULL;
    }
    Node(Node *x)
    {
        this->bookTitle = x->bookTitle;
        this->authorName = x->authorName;
        this->publisherName = x->publisherName;
        this->yearOfPublication = x->yearOfPublication;
        this->ISBN = x->ISBN;
        this->price = x->price;

        this->prev = NULL;
        this->next = NULL;
    }
};
class Stack
{
public:
    Node *top;
    Stack()
    {
        this->top = NULL;
    }
    void push(Node *X)
    {
        X->next = this->top;
        this->top->prev = X;
        this->top = X;
        return;
    }
    void pop()
    {
        if (this->top == NULL)
            return;
        Node *temp = this->top;
        this->top = this->top->next;
        if (this->top != NULL)
            this->top->prev = NULL;
        temp->next = NULL;
        delete (temp);
        return;
    }
    void display()
    {
        Stack *s = new Stack();
        while (this->top != NULL)
        {
            Node *y = new Node(this->top);
            s->push(y);
            this->pop();
            cout << y->authorName << " " << y->bookTitle << " " << y->publisherName << " "
                 << y->yearOfPublication << " " << y->ISBN << " " << y->price << endl;
        }
        while (s->top != NULL)
        {
            Node *y = new Node(s->top);
            this->push(y);
            s->pop();
        }
        return;
    }
};
int main()
{
    Stack *st = new Stack();
    for (int i = 0; i < 5; i++)
    {
        if (i < 3)
        {
            string bookTitle, authorName, publisherName;
            int yearOfPublication, ISBN, price;
            cin >> bookTitle >> authorName >> publisherName >> yearOfPublication >> ISBN >> price;
            Node *temp = new Node(bookTitle, authorName, publisherName, yearOfPublication, ISBN, price);
            st->push(temp);
        }
        else if (i == 3)
        {
            st->pop();
        }
        else
        {
            st->display();
        }
    }
    return 0;
}