#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
#define e end
#define b begin
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n;
    cin>>n;
    ll ans=0,b=INT_MAX,c=INT_MAX;
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        vector <ll> arr(m);
        for(ll i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.b(),arr.e());
        ans+=arr[1];
        // cout<<arr[1];
        b = min(b,arr[0]);
        c = min(c,arr[1]);
    }
    // cout<<ans<<'\n';
    cout<<ans+b-c<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}