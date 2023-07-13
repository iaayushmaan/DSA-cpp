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

void zigZag(node *root)
{
    vector<int> res;
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);

    bool leftToRight = true;
    while (!q.empty())
    {
        int n = q.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            node *frontNode = q.front();
            int idx = leftToRight ? i : n - i - 1;
            ans[idx] = frontNode->data;
            if (frontNode->left)
                q.push(frontNode->left);
            if (frontNode->right)
                q.push(frontNode->right);
        }
        leftToRight = !leftToRight;

        for (auto i : ans)
            res.push_back(i);
    }
    for (auto &i : res)
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
    zigZag(root);
    return 0;
}
