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
    ll n=5;
    // cin>>n;
    ll x;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    if(sum%5==0 && sum!=0){
        cout<<sum/5<<'\n';
    }
    else{
        cout<<-1<<'\n';
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