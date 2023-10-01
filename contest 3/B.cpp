#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
void solve(){
    ll n;
    cin>>n;
    // int arr[n][n]={0};
    vector <ll> a;
    vector <ll> b;
    ll x,y;
    for(ll i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        // b.push_back(y);
    }
    for(ll i=0;i<n;i++){
        cin>>y;
        b.push_back(y);
    }
    ll sumA=0,sumB=0;
    for(auto x:a){
        sumA+=x;
    }
    // cout<<sumA;
    for(auto x:b){
        sumB+=x;
    }
    // cout<<sumB;
    ll min_a = *min_element(a.begin(),a.end());
    ll min_b = *min_element(b.begin(),b.end());
    ll ans = min(min_a*n+sumB, min_b*n+sumA);
    cout<<ans<<'\n';
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