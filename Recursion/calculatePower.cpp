#include<iostream>
using namespace std;

// int calculatePower(int a,int b){
//     if(b==0) return 1;

//     if(b==1) return a;

//     return (a*calculatePower(a,b-1));
// }

//OPTIMISED APPROACH
int calculatePower(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;

    int ans=calculatePower(a,b/2);
    if(b-2 * (b/2)==0)
    return ans*ans;
    else
    return a*ans*ans;
}

int main(){
    cout<<calculatePower(2,10)<<endl;
}