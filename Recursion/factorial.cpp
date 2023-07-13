#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    int ans=factorial(n-1);
    return n * ans;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}