#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
    maxSum=max(maxSum,currsum);
    }return maxSum;
}

int main(){
    int n;
    cout<<"Enter no. of elemnts in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);  
    int wrapsum;
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }  
    wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}        