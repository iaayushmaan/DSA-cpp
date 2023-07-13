#include <iostream>
#include <vector>
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

node *insertBST(node *root, int val)
{
    if (root == NULL)
        return new node(val);

    if (val > root->data)
        root->right = insertBST(root->right, val);
    else
        root->left = insertBST(root->left, val);

    return root;
}

void printInorder(node *root)
{
    if (root == NULL)
        return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void inorderStore(node *root, vector<node *> &in)
{
    if (root == NULL)
        return;
    inorderStore(root->left, in);
    in.push_back(root);
    inorderStore(root->right, in);
}

void SortedLL(node *root)
{
    vector<node *> in;
    inorderStore(root, in);
    int n = in.size();
    for (int i = 0; i < n - 1; i++)
    {
        in[i]->right = NULL;
        in[i]->left = in[i + 1];
    }
    in[n - 1]->left = NULL;
    in[n - 1]->right = NULL;
    node *curr = in[0];
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->left;
    }
    cout << "NULL";
}

int main()
{
    node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    printInorder(root);
    cout << endl;
    SortedLL(root);
    return 0;
}