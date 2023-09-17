#include<bits/stdc++.h>
using namespace std;
#define ll double
int solve(){
    string str;
    cin>>str;
    vector <int> v;
    for(auto x:str){
        v.push_back(x-'0');
    }
    int n=v.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>=5){
            count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}