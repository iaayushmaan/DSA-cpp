#include<iostream>
#include<math.h>
using namespace std;

bool check(int x,int y,int z){
    int a= max(x, max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=z;
        c=x;
    }else{
        b=x;
        c=y;
    }
    cout<<a<<b<<c;
    if (a*a == b*b + c*c)
    return true;
    else
    return false;
    
    
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    
    if (check(x,y,z)){
        cout<<"YES Pythagorian Triplet"<<endl;

    }else{
        cout<<"NO Pythagorian Triplet"<<endl;
    }
}