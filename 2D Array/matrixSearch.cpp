#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
        }
    }

    bool flag = false;
    int target;
    cin>>target;
    // Approach 1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]== target){
    //             flag=true;
    //         }
    //     }
    // }

    // Approach 2

    int a=0,b=m-1;
    while(a<n && b>=0){
        if(arr[a][b] == target){
            flag=true;
        }
        if(arr[a][b]>target){
            b--;
        }else{
            a++;
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}