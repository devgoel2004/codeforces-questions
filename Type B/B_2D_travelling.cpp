#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    a-=1;
    b-=1;
    vector <pair<ll,ll>> v;
    ll x,y;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll diff = abs(v[a].F - v[b].F)+abs(v[a].S - v[b].S);
    ll diffA=0,minA=1e13,minB=1e13;
    for(ll i=0;i<k;i++){
        minA = min(abs(v[i].F-v[a].F)+abs(v[i].S - v[a].S),minA);
        minB = min(abs(v[i].F-v[b].F)+abs(v[i].S - v[b].S),minB);
    }
    cout<<min(minA+minB, diff)<<endl;
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