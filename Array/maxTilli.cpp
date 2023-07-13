#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elemnts in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    // int tillI,mx;
    // cin>>tillI;
    // mx=arr[0];
    // for(int i=1;i<tillI;i++){
    //      mx=max(mx,arr[i]);
    // } 
int mx=-19999999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    cout<<mx;  
    }
}