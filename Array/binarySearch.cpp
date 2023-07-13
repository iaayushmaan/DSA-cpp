#include<iostream>
#include<climits>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
    int mid=(s+e)/2;

    if (arr[mid]==key){
        return mid;
    } else if (arr[mid]>key){
        e=mid-1;
    }else{
        s=mid+1;
    }
}
    return -1;
}

int main(){
    int n;
    cout<<"Enter no. of elemnts in an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int key;   
    cin >> key;

    cout<<binarySearch(arr,n,key)<<endl;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int t;
// cin>>t;
// while(t--){
// 	int x,y;
// 	cin>>x>>y;
// 	if(x%y==0) cout<<0<<endl;
// 	else {
// 	int w=x%y;
// 	cout<<y-w<<endl;
// 	}
// }
//   return 0;
// }
