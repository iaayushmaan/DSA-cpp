#include<iostream>
#include<string>
using namespace std;

int gcd(int a,int b){
    

    while (b!=0)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}

