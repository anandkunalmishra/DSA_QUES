#define INPUT "/Users/anandkunalmishra/DS&Algo/input.txt"
#define OUTPUT "/Users/anandkunalmishra/DS&Algo/output.txt"

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
    int size;
    Stack()
    {
        this->top = NULL;
        this->size = 0;
    }
    void push(Node *X)
    {
        X->next = this->top;
        if (this->top != NULL)
            this->top->prev = X;
        this->top = X;
        size++;
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
        size--;
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
            cout << y->bookTitle << " " << y->authorName << " " << y->publisherName << " "
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
    void total()
    {
        int tot = 0;
        Stack *s = new Stack();
        while (this->top != NULL)
        {
            Node *y = new Node(this->top);
            s->push(y);
            this->pop();
            tot += y->price;
        }
        while (s->top != NULL)
        {
            Node *y = new Node(s->top);
            this->push(y);
            s->pop();
        }
        cout << tot;
    }
};
int main()
{
    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    Stack *st = new Stack();
    int n;
    cin >> n;
    while (n--)
    {
        string bookTitle, authorName, publisherName;
        int yearOfPublication, ISBN, price;
        cin >> bookTitle >> authorName >> publisherName >> yearOfPublication >> ISBN >> price;
        Node *temp = new Node(bookTitle, authorName, publisherName, yearOfPublication, ISBN, price);
        st->push(temp);
    }
    st->display();
    cout << endl;
    cout << "The total price of book is ";
    st->total();
    return 0;
}
