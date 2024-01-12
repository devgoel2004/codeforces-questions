#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            arr[i]++;
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]%arr[i-1]==0){
            arr[i]+=1;
            // cout<<1<<'\n';
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
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