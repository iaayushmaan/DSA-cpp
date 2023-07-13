#include<iostream>
using namespace std;

// void substng(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string ros=s.substr(1);
//     // cout<<ros<<endl;
//     substng(ros,ans);
//     //  cout<<ans<<endl;
//     substng(ros,ans+ch);
//     // cout<<ans<<endl;
// }

//Print substrings with their ASCII value
void substng(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int ascii=ch;
    string ros=s.substr(1);
    substng(ros,ans);
    substng(ros,ans+ch);
    substng(ros,ans + to_string(ascii));
}


int main(){
    substng("AB","");
    return 0;
}