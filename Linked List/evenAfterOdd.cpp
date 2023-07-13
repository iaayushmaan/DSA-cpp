#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void evenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(even->next!=NULL && odd->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
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
    int arr1[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++) insert(head,arr1[i]);
    display(head);
    evenAfterOdd(head);
    display(head);
    
    return 0;
}