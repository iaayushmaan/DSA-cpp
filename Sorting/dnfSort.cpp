#include<iostream>
using namespace std;

void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void dnfSort(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){
    int arr[10]={1,1,2,0,0,1,2,2,1,0};
    dnfSort(arr,9);
    
    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0; 
}