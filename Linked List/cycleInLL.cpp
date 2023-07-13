#include<iostream>
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
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

void insert(node* &head,int val){
    node* n= new node(val);
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

//Make Cycle
void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int count = 0;
    while(temp->next!=NULL){
        if(pos==count) startNode=temp;
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

//Detect Cycle
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

//Remove Cycle
void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

void display(node* &head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);
    makeCycle(head,3);
    //display(head);
    if(detectCycle(head)) py;
    else pn;
    removeCycle(head);
    if(detectCycle(head)) py;
    else pn;
    display(head);
    return 0;
}