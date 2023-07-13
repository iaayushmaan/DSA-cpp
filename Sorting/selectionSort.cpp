#include<iostream>
#include<climits>
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

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
             int temp=arr[j];
            //  cout<<arr[i]<<arr[j]<<temp<<endl;
             arr[j]=arr[i];
            //  cout<<arr[i]<<arr[j]<<temp<<endl;
             arr[i]=temp;
            //  cout<<arr[i]<<arr[j]<<temp<<endl;
            }
        }
    } 
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";   
    }
}
