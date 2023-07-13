#include<iostream>
#include<stack>
using namespace std;

// //Reversing a string

// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
//     for(int i=0; i<s.length(); i++){
//         st.push(s[i]);
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     return 0;
// }

// //Delete Middle Element

// void deleteMiddle(stack<int> &st,int cnt,int n){
//     if(n/2==cnt){
//         st.pop();
//         return;
//     }
//     int el=st.top();
//     st.pop();
//     deleteMiddle(st,cnt+1,n);
//     st.push(el);
// }

// int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
//     deleteMiddle(st,0,5);
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
// }

//Insert Element At Bottom

void insertAtBottom(stack<int>& st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int topel=st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(topel);
}

//Reverse Stack
void reverse(stack<int>& st){
    if(st.empty()) return;
    int topel=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,topel);
}

//Sort stack
void sortedInsert(stack<int>& st,int val){
    if(st.empty() || (!st.empty() && st.top()<=val)){ st.push(val);return;}

    int el=st.top();
    st.pop();
    sortedInsert(st,val);
    st.push(el);
}

void sort(stack<int>& st){
    if(st.empty()) return;
    int topel=st.top();
    st.pop();
    sort(st);
    sortedInsert(st,topel);
}


int main(){
        stack<int> st;
    st.push(1);
    st.push(2);
    st.push(9);
    st.push(4);
    st.push(5);
    sort(st);
   // insertAtBottom(st,10);
  // reverse(st);
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}