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
    vector <pair<ll,ll>> v;
    ll x,y;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(ll i=1;i<n;i++){
        if(v[i].F >= v[0].F && v[i].S >= v[0].S){
            cout<<-1<<'\n';
            // cout<<i<<'\n';
            return;
        }
    }
    cout<<v[0].F<<'\n';
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