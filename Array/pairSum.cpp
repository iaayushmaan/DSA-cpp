#include<iostream>
using namespace std;

// SHOULD BE A SORTED ARRAY

bool pairSum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]<k){
            low++;
        }else if(arr[low]+arr[high]>k){
            high--;
        }else if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter no. of elemnts in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int k=31;    
    cout<<pairSum(arr,n,k)<<endl;    
}