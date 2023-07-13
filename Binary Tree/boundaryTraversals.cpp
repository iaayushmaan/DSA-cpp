#include <iostream>
#include <queue>
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

/*
       1
      / \
     2   3
    / \  / \
   4   5 6  7

*/

void leftTraversal(node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
        return;
    ans.push_back(root->data);
    if (root->left)
        leftTraversal(root->left, ans);
    if (root->right)
        leftTraversal(root->right, ans);
}

void leafTraversal(node *root, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
}

void rightTraversal(node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->right == NULL && root->left == NULL))
        return;
    if (root->right)
        rightTraversal(root->right, ans);
    else
        rightTraversal(root->left, ans);

    ans.push_back(root->data);
}

void boundaryTraversal(node *root)
{
    vector<int> ans;
    if (root == NULL)
        return;
    ans.push_back(root->data);
    leftTraversal(root->left, ans);
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
    rightTraversal(root->right, ans);

    for (auto i : ans)
        cout << i << " ";
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    boundaryTraversal(root);
    return 0;
}
