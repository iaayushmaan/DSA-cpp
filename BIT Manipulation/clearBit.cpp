#include<iostream>
using namespace std;

int clearBit(int n,int pos){
    return (n & ~(1<<pos));
}

int main(){
    int n,pos,k;
    cin>>n>>pos;
    cout<<clearBit(n,pos)<<endl;
}
