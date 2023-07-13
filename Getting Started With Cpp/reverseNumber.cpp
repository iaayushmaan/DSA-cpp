#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter the number to be reversed:";
    cin>>n;
    
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n=n/10;
    }
    cout<<"Reversed number is:"<<rev;
}