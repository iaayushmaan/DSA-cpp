#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elemnts in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int sum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    // int currsum=0;    
    //         for(int k=i;k<=j;k++){
                
    //                 currsum +=arr[k];

                
    //     } sum=max(sum,currsum);
    // }
    // }   cout<<sum; 

    // Cumulative sum approach
    // for(int i=0;i<n;i++){
    //     int currsum=0;
    //     for(int j=i;j<n;j++){
    //         currsum+=arr[j];
    //     }sum=max(sum,currsum);
    // }
    // cout<<sum;

    // Kadane's Algorithm
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        sum=max(sum,currsum);        
    }
    cout<<sum<<endl;
}  