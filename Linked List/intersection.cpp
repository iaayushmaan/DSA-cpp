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

void intersect(node* &head1, node* &head2,int pos){
    node* temp1=head1;
    node* temp2=head2;
    pos--;
    while(pos--) temp1=temp1->next;
    while(temp2->next!=NULL) temp2=temp2->next;

    temp2->next=temp1;
}

int length(node* &head){
    node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt; 
}

int checkIntersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int diff=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        diff=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }else{
        diff=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(diff--){
        ptr1=ptr1->next;
        if(ptr1==NULL) return -1;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2) return ptr1->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;

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
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head1,7);
    insert(head2,8);
    insert(head2,9);
    intersect(head1,head2,4);
    display(head1);
    display(head2);
    cout<<checkIntersection(head1,head2)<<endl;
}