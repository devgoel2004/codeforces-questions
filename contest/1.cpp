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
    ll x,v,u;
    cin>>x>>v>>u;
    ll t1,t2;
    if(x%v==0){
        t1=x/v;
    }
    else if(x%v!=0){
        t1=x/v+1;
    }
    if(x%u==0){
        t2=x/u;
    }
    else if(x%u!=0){
        t2 = x/u+1;
    }
    // cout<<t1<<" "<<t2<<"\n";
    if(t1==t2 || t2>t1){
        cout<<-1<<'\n';
    }
    else{
        cout<<t1-t2-1<<'\n';
    }
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