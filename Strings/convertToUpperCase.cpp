#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="kdnsclikjLKLKvnwoli";
    // cout<<'a'-'A'<<endl;

    //Convert to Upper Case
    for(int i=0; i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
            cout<<str[i];
        }
    }
    cout<<endl<<str<<endl;
    
    //Convert to Lowercase
    for(int i=0; i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
            cout<<str[i];
        }
    }
    cout<<endl<<str<<endl;
}
