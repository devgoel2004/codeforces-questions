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
    ll j=n-1,i=0;
    vector <ll> sum(n,0);
    while(i!=j){
        sum[i]= a[i]+a[j];
        i++;
        j--;
    }
    sort(sum.b(),sum.e());
    int count=0,ans=0;
    for(int i=1;i<n;i++){
        if(sum[i]!=0  && sum[i-1]==sum[i]){
            // cout<<count<<'\n';
            count++;
        }
        else{
            count=0;
        }
        ans = max(count,ans);
    }
    cout<<ans+1<<'\n';
    // return 0;
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