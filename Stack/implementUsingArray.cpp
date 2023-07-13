#include<iostream>
#define n 100
using namespace std;

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int val){
        if(top==n-1) {
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top]=val;
    }

    int Top(){
        if(top==-1){ 
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[top];
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }

        top--;
    }

    bool empty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
}