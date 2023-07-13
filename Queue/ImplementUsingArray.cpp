#include<iostream>
#define n 20
using namespace std;

class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
    arr=new int[n];
    front=-1;
    back=-1;
    }

    void push(int val){
        if(back==n-1){
            cout<<"Queue is full!"<<endl;
            return;
        }
        back++;
        arr[back]=val;

        if(front==-1) front++;
    }

    void pop(){
        if(front>back || front==-1){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front>back || front==-1){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front>back || front==-1){
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
