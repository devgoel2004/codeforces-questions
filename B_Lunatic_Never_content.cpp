#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7

void solve(){
    ll n;
    cin>>n;
    // ll arr[n];
    vector <ll> arr(n);
  
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    // vector <ll> v;
    ll f = abs(arr[0]-arr[n-1]);
    for(ll i=0;i<n/2;i++){
        // v.push_back(abs(arr[i]-arr[n-i-1]));
        ll x = abs(arr[i]-arr[n-i-1]);
        f = __gcd(f,x);
    }
    // ll x = findGCD(v,v.size());
    cout<<f<<'\n';
    // cout<<'\n';
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