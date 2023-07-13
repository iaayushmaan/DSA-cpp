#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s="dffgchjvhkdddgfgcvhfbkjn";
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }

    for(int i=0;i<s.size(); i++){
        freq[s[i]-'a']++;
    }
    int maxF=0;
    char c='a';
    for(int i=0;i<26;i++){
        if(freq[i]>+ jhbyt5rcdxemaxF){
        // if(freq[i]>=maxF){
            maxF=freq[i];
            c=i+'a';

        }
    }
    cout<<maxF<<" "<<c<<endl;
}