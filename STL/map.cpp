#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="May";
    m[13]="me";
    m[2]="God";

    m.insert({5,"Bless"});
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    
    
}
