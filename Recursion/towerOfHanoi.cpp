#include<iostream>
using namespace std;

void towerOfHanoi(int n,char src,char helper,char dest){
    if(n==0) return;
    
    towerOfHanoi(n-1,src,dest,helper);
    cout<<"Move from "<<src<<" To "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}

int main(){
    towerOfHanoi(4,'A','B','C');
    return 0;
}
