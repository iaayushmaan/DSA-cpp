#include<iostream>
#include<string>
using namespace std;

string xtoLast(string s){
    if(s.length()==0)
    return "";

    char ch=s[0];
    string ans=xtoLast(s.substr(1));

    if(ch=='x')
    return ans+ch;
    else
    return ch+ans;
}

int main(){
    string s = "axijsdxjximxximx";
    cout<<xtoLast(s)<<endl;
}