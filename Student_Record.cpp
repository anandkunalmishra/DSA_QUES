#include <bits/stdc++.h>
using namespace std;
struct node
{
    /*
    REQUIRED FIELDS::
        1. Name of Student
        2. Roll Number of Student
        3. Course in which Student is Enrolled
        4. Total Marks of Student
    */
    string Name, Roll, Course;
    int marksTotal;
    node *next;
};

// function for insertion operation
// roll no should be unique : necessary condition
void insert(node *head, string Name, string Roll, string Course, int marksTotal)
{
    node *newnode = new node;
    newnode->Name = Name;
    newnode->Roll = Roll;
    newnode->Course = Course;
    newnode->marksTotal = marksTotal;
    newnode->next = NULL;

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

// function for search operation
struct node *search(node *head, string Roll)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->Roll == Roll)
        {
            cout << "Student data is found" << endl;
            return NULL;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Student Data Not Found";
    }
    return NULL;
}

// function for delete operation
struct node *delet(node *head, string Roll)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->next->Roll == Roll)
        {
            node *ptr = temp;
            temp->next = temp->next->next;
            free(ptr);
            return head;
        }
        temp = temp->next;
    }
    return head;
}

// function to print what all roll numbered data we have at current time
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Roll << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to diasplay the code
void show(node *head, string Roll)
{
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        if (temp->Roll == Roll)
        {
            cout << "Name:: " << temp->Name << endl;
            cout << "Course:: " << temp->Course << endl;
            cout << "Roll:: " << temp->Roll << endl;
            cout << "Total Marks:: " << temp->marksTotal << endl;
        }
    }
}

// driver program
int main()
{
    node *head = new node;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string Name, Roll, Course;
        int marksTotal;
        cin >> Name >> Roll >> Course >> marksTotal;
        insert(head, Name, Roll, Course, marksTotal);
    }
    int option;
    cout << "1. Search any student data with Roll num \n2. Delete any student data with Roll num \n3. Print any student data with Roll num\n";
    cout << "Enter the option You want" << endl
         << endl;
    cin >> option;

    switch (option)
    {
    case 1:
    {
        cout << "You have entered searched option" << endl
             << endl;
        cout << "Output::" << endl
             << endl;
        string R;
        cin >> R;
        search(head, R);
    }
    break;
    case 2:
    {
        cout << "Data Now we have for student with Roll" << endl;
        display(head);
        cout << "You have entered delete option" << endl
             << endl;
        cout << "Output::" << endl
             << endl;
        string R;
        cin >> R;
        delet(head, R);
        cout << "The student data is deleted " << endl
             << endl;
        cout << "Data Now we have for student with Roll" << endl;
        display(head);
    }
    break;
    case 3:
    {
        cout << "You have entered show option" << endl
             << endl;
        cout << "Output::" << endl
             << endl;

        string R;
        cin >> R;
        show(head, R);
    }
    break;
    default:
    {
        cout << "Invalid option selected" << endl
             << endl;
    }
    }

    return 0;
}