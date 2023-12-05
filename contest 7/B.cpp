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
    ll a,b,c;
    cin>>a>>b>>c;
    bool f = true;
    ll mini = min(a,b);
    ll mn = min(mini,c);
    if(a%mn!=0 || b%mn!=0 || c%mn!=0){
        f  = false;     
    }
    ll cnt=0;
    while(a!=mn){
        if(a%mn!=0 || cnt>3){
            f = false;
            break;
        }
        a-=mn;
        cnt++;
    }
    while(b!=mn){
        if(b%mn!=0 || cnt>3){
            f=false;
            break;
        }
        b-=mn;
        cnt++;
    }
    while(c!=mn){
        if(c%mn!=0 || cnt>3){
            f=false;
            break;
        }
        c-=mn;
        cnt++;
    }
    if(cnt>3) f=false;
    if(!f) cout<<"NO\n";
    else{
        cout<<"YES\n";
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