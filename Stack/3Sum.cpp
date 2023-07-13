#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,target; cin>>n>>target;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    //for(auto i:v) cout<<i<<" ";
    bool flag=false;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int curr=v[lo]+v[hi]+v[i];
            if(curr==target) flag=true;
            if(curr<target) lo--;
            else hi--;
        }
    }
    if(flag) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}
