#include<iostream>
using namespace std;

bool powerofTwo(int n){
    return (n && !(n & n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<powerofTwo(n)<<endl;
}