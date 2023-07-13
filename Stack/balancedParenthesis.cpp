#include<iostream>
#include<stack>
using namespace std;

bool balancedParenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        else{
            if(s[i]==')' && st.top()=='(') st.pop();
           else if(s[i]=='}' && st.top()=='{') st.pop();
            else if(s[i]==']' && st.top()=='[') st.pop();
            else return false;
        }
    }
    if(!st.empty()) return false;
    return true;
}
int main(){
    string s;
    cin>>s;
    if(balancedParenthesis(s)) cout<<"Parenthesis Balanced"<<endl;
    else cout<<"Parenthesis Not Balanced"<<endl;
    return 0;
}