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
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
          ans++;
        }
        mx=max(mx,arr[i]);
        }    
        cout<<ans<<endl;
}