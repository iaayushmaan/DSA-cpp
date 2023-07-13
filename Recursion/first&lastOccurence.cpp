#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n ,int i,int k){
    if(i==n) return -1;
     
    if(arr[i]==k)
     return i;
    
    firstOccurence(arr,n,i+1,k);
}

int lastOccurence(int arr[],int n,int i,int k){
    if(i==n) return -1;
    int restArray=lastOccurence(arr,n,i+1,k);
    if(restArray!=-1) return restArray;
     
    if(arr[i]==k)
     return i;
    
    return -1;
}

int main(){
    int n=7;
    int arr[7]={4,2,1,2,5,2,7};
    int k=2;
    cout<<firstOccurence(arr,n,0,k)<<endl;
    cout<<lastOccurence(arr,n,0,k)<<endl;
}