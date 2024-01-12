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
    vector <ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map <int,int> mp;
    for(int i=0;i<n;i++){
        // p.push_back({i,v[i]});
        mp[v[i]]=i;
    }
    int ans=0;
    for(int i=1;i<n;i++){
        if(mp[i] > mp[i+1]){
            ans++;
        }
    }
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