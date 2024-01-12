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
bool isLower(char s){
    if(s>=97 && s<=122){
        return true;
    }return false;
}
bool isUpper(char s){
    if(s>=65 && s<=90){
        return true;
    }
    return false;
}
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n),b(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    b=v;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
        b[i]=b[i]+b[i-1];
    }
    ll m;
    cin>>m;
    while(m--){
        ll type,l,r;
        cin>>type>>l>>r;
        l=l-1;
        r=r-1;
        if(type==1){
            //find in b
            if(l==0) cout<<b[r]<<'\n';
            else cout<<b[r]-b[l-1]<<'\n';
        }
        else{
            if(l==0) cout<<v[r]<<'\n';
            else cout<<v[r]-v[l-1]<<'\n';
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