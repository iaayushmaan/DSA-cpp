#include<iostream>
using namespace std;

bool sortedOrNot(int* arr,int n){
    if(n ==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    else{
        bool remainingpart=sortedOrNot(arr+1,n-1);
        return remainingpart;
    }
}

int main(){
    // int arr[5]={7,6,1,2,3};
    int arr[5]={1,2,3,4,5};
    int n=5;
    bool ans=sortedOrNot(arr,n);
    if(ans) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;
}