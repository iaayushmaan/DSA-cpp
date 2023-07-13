#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(node* root, int &ans){
    if(root==NULL) 
        return {INT_MIN,INT_MAX, true, 0};
    
    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;

    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);

    if(left.isBST && right.isBST && root->data > left.maxi && root->data < right.maxi)
        currNode.isBST = true;
    else 
        currNode.isBST = false;

    if(currNode.isBST) 
        ans = max(ans, currNode.size);

    return currNode;
}

int largestBST(node* root){
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}

int main(){
    
}