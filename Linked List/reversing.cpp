#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val ){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

// //Reversing (Iterative way)
// node* reverse(node* &head){
//     node* prev=NULL;
//     node* curr=head;
//     node* next;
//     while(curr!=NULL){
//         next=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }

//Reversing (Recursive Method)
node* reverse(node* &head){
    if(head==NULL || head->next==NULL)
        return head;

    node* newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);
    // insertAtHead(head,5);
    // display(head);

    node* reversed=reverse(head);
    display(reversed);
    return 0;
}