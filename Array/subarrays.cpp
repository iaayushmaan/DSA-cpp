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
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
        } cout<<endl;
            }
    }    
}        