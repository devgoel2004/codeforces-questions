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
    vector <ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.b(),a.e());
    ll ans=1;
    for(ll i=0;i<n;i++){
        if(ans < a[i]){
            break;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<'\n';
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