#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(){
    ll n,k,d,w;
    cin>>n>>k>>d>>w;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll when=-1,cnt=0,ans=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<=when+d && cnt>0){  //box should be open or not?
        
            cnt-=1;
        }
        else{
            when = arr[i]+w;
            cnt=k-1;
            ans+=1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}