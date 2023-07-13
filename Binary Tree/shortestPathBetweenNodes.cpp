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

int findDistance(node *root, int k, int d)
{
    if (root == NULL)
        return -1;

    if (root->data == k)
        return d;
    int left = findDistance(root->left, k, d + 1);
    if (left != -1)
        return left;
    return findDistance(root->right, k, d + 1);
}

node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    node *left = LCA(root->left, n1, n2);
    node *right = LCA(root->right, n1, n2);

    if (left != NULL && right != NULL)
        return root;
    if (left == NULL && right == NULL)
        return NULL;
    if (left != NULL)
        return LCA(root->left, n1, n2);

    return LCA(root->right, n1, n2);
}

int distanceBtwNodes(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);
    int d1 = findDistance(lca, n1, 0);
    int d2 = findDistance(lca, n2, 0);

    return d1 + d2;
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
    cout << distanceBtwNodes(root, 2, 7) << endl;
    return 0;
}