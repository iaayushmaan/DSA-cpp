#include<iostream>
using namespace std;

//FOR ONE UNIQUE ELEMENT
// int unique(int arr[], int n){
//     int ans=0;
//     for(int i = 0; i < n; i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

//FOR TWO UNIQUE ELEMENT
int setBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

void unique(int arr[],int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int temp=xorsum;
    int setbit=0;
    int count=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        count++;
        xorsum=xorsum >> 1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],count-1)){
            newxor=newxor^arr[i];
        }
    }
    int ans=newxor^temp;
    cout<<newxor<<endl;
    cout<<ans<<endl;
}

int main(){
    int arr[]={6,2,3,1,1,6,2,3,5,7};
    unique(arr,10);
}