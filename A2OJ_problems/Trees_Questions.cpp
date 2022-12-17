#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *getNewNode(int data)
{
    struct node *newNode = new node;
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
        return getNewNode(data);

    if (root->key < data)
        root->right = insert(root->right, data);

    if (root->key > data)
        root->left = insert(root->left, data);

    return root;
}
int depth(struct node *root)
{
    if (root == NULL)
        return 0;
    return max(depth(root->left), depth(root->right)) + 1;
}
int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    struct node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        root = insert(root, data);
    }

    cout << "The no. of node in max depth is :: " << depth(root);

    return 0;
}