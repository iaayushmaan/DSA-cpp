#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }
};

class stack{
    node* top;

    stack() {top=NULL;}

    void push(int val){
        node* temp=new node(val);
        if(!temp){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        temp->data=val;
    temp->next=top;
    top=temp;

    }
}