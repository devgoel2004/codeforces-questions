#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
ll multi(ll a, ll b, ll x, ll y, ll n){
    ll sub;
    if(a-x>n){
        a-=n;
    }
    else{
        sub = (a-x);
        a-=sub;
        if(n-sub<b-y){
            b-=n-sub;
        }
        else{
            b-=b-y;
        }
    }
    return a*b;
}
void solve(){
    ll a,b,x,y,n,sub=0,ans;
    cin>>a>>b>>x>>y>>n;
    ans = min(multi(a,b,x,y,n),multi(b,a,y,x,n));
    cout<<ans<<endl;
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