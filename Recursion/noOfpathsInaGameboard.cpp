#include<iostream>
using namespace std;

int noOfPaths(int s,int e){
    if(s==e) return 1;
    if(s>e) return 0;

    int count =0;
    for(int i=1;i<=6;i++){
        count+=noOfPaths(s+i,e);
    }
    return count;
}

int main(){
    cout<<noOfPaths(0,3)<<endl;
}