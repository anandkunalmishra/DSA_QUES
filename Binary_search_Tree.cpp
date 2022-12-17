#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
};
node *getNewnode(int key)
{
    {
        node *root = new node;
        root->key = key;
        root->left = root->right = NULL;

        return root;
    }
}
node *insert(node *root, int key)
{
    if (root == NULL)
        root = getNewnode(key);
    else
    {
        if (key < root->key)
            insert(root->left, key);
        else
            insert(root->right, key);
    }
    return root;
}
// bool search(node *root, int key)
// {
//     if (root == NULL)
//         return false;
//     if (root->key == key)
//         return true;
//     if (root->key < key)
//         search(root->left, key);
//     else
//         search(root->right, key);
//     return true;
// }
int minValue(node *root)
{
    int minV = root->key;
    while (root != NULL)
    {
        minV = root->left->key;
        root = root->left;
    }
    return minV;
}
node *delet(node *root, int key)
{
    if (root == NULL)
        return root;
    if (root->key < key)
        root->right = delet(root->right, key);
    if (root->key > key)
        root->left = delet(root->left, key);
    else
    {
        if (root->left == NULL)
            return root->right;
        else if (root->right = NULL)
            return root->left;
        root->key = minValue(root->right);
        root->right = delet(root->right, root->key);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->key;
    inorder(root->right);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    node *root = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        insert(root, data);
    }
    inorder(root);
}