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

node* mergeRecursive(node* &head1,node* &head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;

    node* res=NULL;
    if(head1->data<head2->data){
        res=head1;
        res->next=mergeRecursive(head1->next,head2);
    }else{
        res=head2;
        res->next=mergeRecursive(head1,head2->next);
    }
    return res;
}

node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
        }
        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
    
    return dummy->next;
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
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0;i<4;i++) insert(head1,arr1[i]);
    for(int i=0;i<3;i++) insert(head2,arr2[i]);
    display(head1);
    display(head2);
    node* newl=mergeRecursive(head1,head2);
    display(newl);
    return 0;
}