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


       1
      / \
     2   3
    / \  / \
   4   5 6  7
    
*/

bool isIdentical(node* r1, node* r2){
    if(r1==NULL && r2==NULL) return true;
    if(r1==NULL && r2!=NULL) return false;
    if(r1!=NULL && r2==NULL) return false;

    bool left=isIdentical(r1->left,r2->left);
    bool right=isIdentical(r1->right,r2->right);

    bool val=r1->data==r2->data;
    if(left && right && val) return true;

    return false;
}

int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);

    node* root2=new node(1);
    root2->left=new node(2);
    root2->right=new node(3);
    root2->left->left=new node(4);
    root2->left->right=new node(5);
    root2->right->left=new node(6);
    root2->right->right=new node(7);

    if(isIdentical(root1,root2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}