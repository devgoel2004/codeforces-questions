#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
void solve(){
    ll n,l,k;
    cin>>n>>l>>k;
    ll arr[l+1];
    for(int i=0;i<=l;i++){
        cin>>arr[i];
    }
    // cout<<1<<' ';
    int count=0;
    for(int i=1;i<l+1;i++){
        ll x= arr[i-1]^arr[i];
        // cout<<x<<'\n';
        ll cnt=0;
        while(x!=0){
            x=x&(x-1);
            cnt++;
        }
        // cout<<cnt<<'\n';
        if(cnt<=k){
            count++;
        }
    }
    cout<<count<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}