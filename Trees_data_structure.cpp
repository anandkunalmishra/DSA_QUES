/*
    created by Anand Kunal Mishra
    date : 4th Feb
    Program on basic operations on tree data structures
*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *getnewNode(int val)
{
    node *newNode = new node[sizeof(node)];
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int height(node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}
void PrintNodeatDistance(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    PrintNodeatDistance(root->left, k - 1);
    PrintNodeatDistance(root->right, k - 1);
}
void levelOrdertraversel(node *root)
{
    // its complexity is O(h*n)
    int k = 0;
    while (k < height(root))
    {
        PrintNodeatDistance(root, k);
        k++;
    }
}

/*since its complexity is higher so we would implent
 less complex code */

void levelOrdertraversal_usinqueue(node *root)
{
    // its complexity is O(n)
    if (root == NULL)
        return;
    else
    {
        queue<node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}
void levelOrderTraversal_line_by_line(node *root)
{
    // to print the data of node line by line
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    // here we push NULL to mark the end of the level
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
            /* if we encounter NULL that means it mark the end
               of the level and also next level all node are
               pushed so to mark the end we push NULL*/
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
void levelOrderTraversal_line_by_line_method2(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q; // a node of queue is created
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size(); // count is size of number available at a level
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front(); //
            q.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << "\n";
    }
}
node *insert(node *root, int data) // for binary search tree
{
    if (root == NULL)
        return getnewNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}
int sizeOfTree(node *root) // gives size of Tree
{
    if (root == NULL)
        return 0;
    return sizeOfTree(root->left) + sizeOfTree(root->right) + 1;
}
int maxmNum(node *root) // gives maxm value of Binary Search Tree
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}
int maxlevel = 0;
void printleft(node *root, int level)
{
    if (root == NULL)
        return;
    if (maxlevel < level)
    {
        cout << root->data << " ";
        maxlevel = level;
    }
    printleft(root->left, level + 1);
    printleft(root->right, level + 1);
}
void printleftview(node *root)
{
    printleft(root, 1);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    node *root = NULL;
    int num;
    cin >> num;
    while (num--)
    {
        int data;
        cin >> data;
        root = insert(root, data);
    }
    cout << "The inorder traversal is " << endl;
    inorder(root);
    cout << endl;

    cout << endl;
    cout << "The preorder traversal is " << endl;
    preorder(root);
    cout << endl;

    cout << endl;
    cout << "The postorder traversal is " << endl;
    postorder(root);
    cout << endl;

    cout << endl;
    cout << "height of tree is " << endl;
    cout << height(root) << endl;

    cout << endl;
    cout << "Node at distance " << endl;
    PrintNodeatDistance(root, 2);
    cout << endl;

    cout << endl;
    cout << "LevelOrderTraversal is  " << endl;
    levelOrdertraversel(root);
    cout << endl;

    cout << endl;
    cout << "levelOrderTraversal using queue " << endl;
    levelOrdertraversal_usinqueue(root);
    cout << endl;

    cout << endl;
    cout << "LevelOrderTraversal line by line " << endl;
    levelOrderTraversal_line_by_line(root);
    cout << endl;

    cout << endl;
    cout << "LevelOrderTraversal line by line by method 2 " << endl;
    levelOrderTraversal_line_by_line_method2(root);
    cout << endl;

    cout << "size of tree" << endl;
    cout << sizeOfTree(root);
    cout << endl;

    cout << endl;
    cout << "Maximum element of binary tree"
         << endl;
    cout << maxmNum(root);

    cout << endl;
    printleftview(root);

    return 0;
}