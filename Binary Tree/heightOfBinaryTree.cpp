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
  /
 8

*/

// int heigthOfTree(node* root){
//     if(root==NULL) return 0;
    
//     int left=heigthOfTree(root->left);
//     int right= heigthOfTree(root->right);

//     int ans=max(left,right);
//     return ans+1;
// }

// //Diameter of a Tree
// //Longest path between two nodes
// int diameter(node* root){
//     if(root ==NULL) return 0;

//     int left=diameter(root->left);
//     int right=diameter(root->right);
//     int mid=heigthOfTree(root->left)+heigthOfTree(root->right)+1;
//     return max(left,max(mid,right));
// }

pair<int,int> diameterfast(node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterfast(root->left);
    pair<int,int> right=diameterfast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}

int diameter(node* root){
    return diameterfast(root).first;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->left->left=new node(8);
    //cout<<heigthOfTree(root)<<endl;
    cout<<diameter(root)<<endl;
    return 0;
}

// #include<iostream>
// #include<queue>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

/*
       1
      / \
     2   3
    / \  / \
   4   5 6  7
   
*/

// int main(){
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     return 0;
// }