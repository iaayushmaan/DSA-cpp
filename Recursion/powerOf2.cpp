#include<iostream>
using namespace std;

int powerOf2(int n){
    if(n==0) return 1;
    int ans=powerOf2(n-1);
    return 2*ans;
}

int main(){
    int n;
    cin>>n;
    cout<<powerOf2(n)<<endl;
}