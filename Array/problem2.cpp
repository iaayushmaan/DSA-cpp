#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    // cout<<"Enter no. of elements in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int sum;
    cin>>sum;
    
    int i,j;
    int currsum=0;
    // int s=arr[0];
    // int e=arr[1];
    // for(i=0;i<n;i++){
    //     if(arr[i]>=sum){
    //     currsum+=arr[i-1];
    //     // return i-1;
    //     // break;}
    //     }
    // }
    // for(j=0;j<n;j++){
    //     if(arr[j]+currsum==sum){
    //     // return j;
    //     // break;}
    // }}
    // cout<<i<<j<<endl;

    int s=-1;
    int e=-1;
    while(sum+arr[j]<=currsum && j<n){
      sum+=arr[j];
      j++;
    }
    if(sum==currsum){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=arr[j];
        while(sum>currsum){
            sum -= arr[j];
            i++;
        }
        if(sum==currsum){
            s=i+1;
            e=j+1;
            break;
        }
        j++;
    }
    cout<<s<<" "<<e<<endl;
    return 0;

}