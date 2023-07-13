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
    int key;    
    cout<<"Key:";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"\nElement is present at index "<<i<<endl;

        }else{
            continue;
        }
    }
    
        
}        