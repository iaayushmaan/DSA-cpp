#include<iostream>
using namespace std;

int countPaths(int n,int i,int j){
    if(i==n-1 && j==n-1) return 1;
    if(i>=n || j>=n) return 0;

    return countPaths(n,i+1,j) + countPaths(n,i,j+1);
}

int main(){
    cout<<countPaths(3,0,0)<<endl;
}