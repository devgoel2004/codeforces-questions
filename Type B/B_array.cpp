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
    vector <ll>a(n);
    vector <ll> b(n);
    vector <ll> c(2*n);
    vector <ll> d(2*n);
    vector <ll> e(2*n);
    vector <ll> f(2*n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<2*n;i++){
        if(i<n){
            c[i]=a[i];
        }
        else{
            c[i+n]=b[i];
        }
    }
    for(auto x:c){
        cout<<x<<" ";
    }
    cout<<'\n';

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