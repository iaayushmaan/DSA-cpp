#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int k){
     if(s>e) return -1;

     int mid=s+(e-s)/2;
     if(arr[mid]==k) return mid;
     else if(arr[mid]<k) return binarySearch(arr,mid+1,e,k);
     else if(arr[mid]>k) return binarySearch(arr,s,mid-1,k);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5,key=5;
    int s=0,e=n-1;
    cout<<binarySearch(arr,0,4,key)<<endl;
}
