#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    ll ans=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        ans++;
        if(sum>=n){
            break;
        }
    }
    // cout<<sum<<endl;
    ll diff = sum-n;
    if(diff>1 || diff==0){
        cout<<ans<<'\n';
    }
    else{
        cout<<ans+1<<'\n';
    }
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