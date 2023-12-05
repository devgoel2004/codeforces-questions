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
    vector <ll> b(n);
    // ll sumA =0,sumB=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        // sumA+=a[i];
        // sumA[]
        b[i] = a[i];
    }
    sort(b.b(),b.e());
    
    for(ll i=1;i<n;i++){
        a[i]=a[i-1]+a[i];
        b[i] = b[i-1]+b[i];
    }
    ll k;
    cin>>k;
    while(k--){
        ll l,r,t;
        cin>>t>>l>>r;
        if(t==2){
             if(l==1){
                cout<<b[r-1]<<'\n';
            }
            else cout<<b[r-1]-b[l-2]<<"\n";
        }
        else{
            if(l==1){
                cout<<a[r-1]<<'\n';
            }
            else{
            cout<<a[r-1]-a[l-2]<<'\n';
            }
        }
    }
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