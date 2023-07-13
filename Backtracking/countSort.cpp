#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    //Finding the maximum element in the original array
    int k=arr[0];
    for(int i=0;i<n;i++)
        k=max(k,arr[i]);

    int count[10]={0};    
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //Modifying the count array
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    //Sorted array will be stored in output array
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    //Copying the elements 
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}

int main(){
    int arr[10]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
