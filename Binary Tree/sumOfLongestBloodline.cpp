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

void solve(node *root, int sum, int &maxsum, int len, int &maxlen)
{
    if (root == NULL)
    {
        if (len > maxlen)
        {
            maxlen = len;
            maxsum = sum;
        }
        else if (len == maxlen)
        {
            maxsum = max(sum, maxsum);
        }
        return;
    }
    sum += root->data;
    solve(root->left, sum, maxsum, len + 1, maxlen);
    solve(root->right, sum, maxsum, len + 1, maxlen);
}

void sumOfLongestBloodline(node *root)
{
    int len = 0, maxlen = 0, sum = 0, maxsum = -1;
    solve(root, sum, maxsum, len, maxlen);
    cout << maxsum << " " << maxlen;
}

/*
       1
      / \
     2   3
        / \
        6  7

*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    sumOfLongestBloodline(root);
    return 0;
}