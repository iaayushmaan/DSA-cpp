#include<iostream>
using namespace std;

int friendsPairing(int n){
    if(n==0) return 0;
    if(n==2 || n==1) return n;
    return friendsPairing(n-1)+friendsPairing(n-2)*(n-1);
}

int main(){
    cout<<friendsPairing(4);
}