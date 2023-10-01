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
    ll a,b,n;
    cin>>a>>b>>n;
    vector <ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=b;
    ll index=0;
    // cout<<ans<<'\n';
    for(ll j=0;j<n;j++){
        if(v[j]<a){
            ans+=v[j];
        }
        else{
            break;
        }
        index++;
    }
    // cout<<index<<'\n';
    ans =ans+((a-1)*(n-index));
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}