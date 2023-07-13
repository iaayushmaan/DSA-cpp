#include<iostream>
using namespace std;

int clearBit(int n,int pos,int val){
   n= (n & ~(1<<pos));
   return (n | (val << pos));
    
}

int main(){
    int n,pos,val;
    cin>>n>>pos>>val;
    cout<<clearBit(n,pos,val)<<endl;
}