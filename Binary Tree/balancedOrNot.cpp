#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// //O(n^2)
// int height(node* root){
//     if(root==NULL) return 0;

//     int left=height(root->left);
//     int right=height(root->right);

//     int ans = max(left,right)+1;
//     return ans;
// }

// bool isBalanced(node* root){
//     if(root==NULL) return true;

//     bool left=isBalanced(root->left);
//     bool right=isBalanced(root->right);
//     bool diff=abs(height(root->left)-height(root->right))<=1;
    
//     if(left && right && diff) return true;

//     return false;
// }

//Optimised Approach
pair<bool,int> isBalancedFast(node* root){
    if(root==NULL){
        pair<bool,int> p={true,0};
        return p;
    }

    pair<int,int> left=isBalancedFast(root->left);
    pair<int,int> right=isBalancedFast(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;
    bool diff=abs(left.second-right.second)<=1;

    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;
    
    if(leftAns && rightAns && diff) ans.first=true;
    else ans.second=false;

    return ans; 
}

bool isBalanced(node* root){
    return isBalancedFast(root).first;
}

/*
       1
      / \
     2   3
    / \  / \
   4   5 6  7
             \
              8
               \
                9
   
*/

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // root->right->right->right=new node(8);
    // root->right->right->right->right=new node(9);
    if(isBalanced(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // if(isBalancedFast(root)) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    return 0;
}
