#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string s){
    stack<char> st;
    for(int i=0; i<s.length();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            if(st.top()=='(') return true;
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    if(redundantBrackets(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}