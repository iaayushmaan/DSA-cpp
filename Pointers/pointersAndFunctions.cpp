#include<iostream>
using namespace std;

void update(int *p){
    // p=p+1;
    *p=*p+1;
}

int main(){
    int a=10;
    int *p=&a;

    cout<<*p<<endl;
    cout<<p<<endl;
    update(p);
    cout<<*p<<endl;
    cout<<p<<endl;
}