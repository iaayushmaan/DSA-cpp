#include<iostream>
using namespace std;

int addBinary(int a,int b){
    int ans=0,prevCarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans= ans*10 + prevCarry;
            prevCarry=0;
        }
        else if(a%2==0 && b%2==1 || a%2==1 && b%2==0){
            if(prevCarry==0){
               ans= ans*10 + 0;
            prevCarry=0; 
            }else if(prevCarry==1){
                ans= ans*10 + 1;
            prevCarry=1;
            }
        }else{
            ans= ans*10 + prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10; 
    } return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
}