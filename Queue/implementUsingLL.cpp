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

class queue{
    public:
    node* front;
    node* back;
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int val){
        node* n=new node(val);
        if(front==NULL){
            front =n;
            back =n;
        }
        back->next = n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
             return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.empty();
    q.pop();
    return 0;
}