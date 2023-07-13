#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string temp="";
        while(s[i]!=' ' && i<s.length()){
            temp+=s[i];
            i++;
        }
        st.push(temp);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    string s;
    getline(cin, s);
    reverseSentence(s);
    return 0;
}