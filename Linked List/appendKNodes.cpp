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

void insertAtHead(node* &head,int val){
    node* n =new node(val);
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

int length(node* &head){
    node* temp=head;
    int l=0;
    while(temp->next!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

//O(n)
node* appendLastKNodes(node* &head,int k){
    node* tail=head;
    node* newhead;
    node* newtail;
    int cnt=0, l=length(head);
    k=k%l;
    while(tail->next != NULL){
        if(cnt==l-k) newtail=tail;
        if(cnt==l-k+1) newhead=tail;
        tail=tail->next;
        cnt++;
    }


    newtail->next=NULL;
    tail->next=head;
    return newhead;
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    display(head);
    node* newlist= appendLastKNodes(head,3);
    display(newlist);
    return 0;
}
