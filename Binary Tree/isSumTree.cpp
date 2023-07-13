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

/*
       1
      / \
     2   3
    / \  / \
   4   5 6  7

*/

pair<bool,int> isSumTreeFast(node* root){
    if(root==NULL){
        pair<bool,int> p={true,0};
        return p;
    }

    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p={true,root->data};
        return p;
    }

    pair<bool,int> leftAns=isSumTreeFast(root->left);
    pair<bool,int> rightAns=isSumTreeFast(root->right);

    bool isleftSumTree=leftAns.first;
    bool isrightSumTree=rightAns.first;

    int leftSum=leftAns.second;
    int rightSum=rightAns.second;
    bool codn=root->data == leftSum + rightSum;

    pair<bool,int> ans;
    if(isleftSumTree && isrightSumTree && codn){
        ans.first=true;
        ans.second=root->data+leftSum+rightSum;
    }    
    else{
        ans.first=false;
    }
    return ans;
}

bool isSumTree(node* root){
    return isSumTreeFast(root).first;
}

int main(){
    node* root=new node(8);
    root->left=new node(2);
    root->right=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(1);
    root->right->left=new node(1);
    root->right->right=new node(1);

    if(isSumTree(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}