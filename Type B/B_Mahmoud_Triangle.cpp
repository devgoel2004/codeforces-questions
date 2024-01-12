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
    // reverse(a.b(),a.e());
    for(int i=2;i<n;i++){
        if(a[i-2]+a[i-1]>a[i]){
            // cout<<a[i-2]+a[i-1]<<" "<<a[i]<<'\n';
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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