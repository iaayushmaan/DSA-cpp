#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    int sum=0;
    int originaln=n;
    while(n>0){
         int ld= n%10;
         sum=sum + ld*ld*ld;
         n = n/10;
    }
    if(sum==originaln){
        cout<<"ArmstrongNumber";
    }else{
        cout<<"Not ArmstrongNumber";
    }
}