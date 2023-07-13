#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0) return 0;
    if(n==1) return arr[0];
    else{
        int remainingPart=sum(arr+1,n-1);
        return arr[0]+remainingPart;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout<<sum(arr,n)<<endl;
}