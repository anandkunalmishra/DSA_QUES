#include <bits/stdc++.h>
#define INPUT "input.txt"
#define OUTPUT "output.txt"

using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;
    Node()
    {
        this->left = NULL;
        this->right = NULL;
    }
    void insert(Node *root, int val)
    {
        if (root == NULL)
        {
            root->key = val;
        }
        if (val < root->key)
            insert(root->left, val);
        if (val > root->key)
            insert(root->right, val);
    }
    bool search(Node *root, int val)
    {
        if (root == NULL)
            return false;
        else if (root->key == val)
            return true;
        else if (root->key > val)
            return search(root->left, val);
        else
            return search(root->right, val);
    }
};

int main()
{
    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    Node *root = new Node();

    int val;

    while (cin >> val)
    {
        insert(root, val);
    }
    int x;
    cin >> x;
    if (search(root, x))
    {
        cout << "found";
    }
    else
        cout << "Not Found";
}