#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;
    if (root->left != NULL)
    {
        flatten(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        node *t = root->right;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }
    flatten(root->right);
}

void inorderPrint(node *root)
{
    if (root == NULL)
        return;

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void print(node *root)
{
    node *head = root;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->right;
    }
    cout << "NULL";
}

/*
       1
      / \
     2   3
    / \  / \
   4   5 6  7

*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    //  cout << distanceBtwNodes(root, 2, 7) << endl;
    flatten(root);
    inorderPrint(root);
    cout << endl;
    print(root);
    return 0;
}