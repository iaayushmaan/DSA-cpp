#include<iostream>
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
    int sum = 0;    
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }  
    // cout<<sum<<endl;  
}        