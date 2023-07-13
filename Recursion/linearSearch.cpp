#include<iostream>
using namespace std;

bool search(int arr[],int n,int i,int k){
    if(i==n) return false;
    if(arr[i]==k)
    return true;
    search(arr,n,i+1,k);

}

int main(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    if(search(arr,n,0,k)) 
    cout<<"Found"<<endl;
    else 
    cout<<"Not Found"<<endl;
}
