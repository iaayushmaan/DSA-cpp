#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter number of rows and columns:";
    cin>>n>>r;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=r;j++){
        cout<<"*";
    }
    cout<<endl;
}
}