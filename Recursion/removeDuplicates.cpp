#include<iostream>
#include<string.h>
using namespace std;

void noDuplicates(string s){
    if(s.length()==0) 
    return;

    string ros=s.substr(1);
    if(s[0]==ros[0]) noDuplicates(ros);
    else {
        cout<<s[0];
        noDuplicates(ros);
    }
}

int main(){
    string s="aaaabbbbbbbbcccddddddee";
    noDuplicates(s);
}