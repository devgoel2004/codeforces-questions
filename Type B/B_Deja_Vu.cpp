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
    ll n,q;
    cin>>n>>q;
    vector <ll> a(n),x(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <pair<ll,ll>> p;
    for(int i=0;i<n;i++){
        p.push_back({a[i],i});
    }
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    sort(p.begin(),p.end());
    sort(a.begin(),a.end());
    sort(x.begin(),x.end());
    for(int i=0;i<q;i++){
        if(a[n-1]>=static_cast<ll>(pow(2,x[i]))){
            for(int j=0;j<n;j++){
                if(a[j]%static_cast<ll>(pow(2,x[i]))==0){
                    p[j].first=p[j].first+static_cast<ll>(pow(2,x[i]-1));
                }
            }
        }else{
            break;
        }
    }
    vector <pair<ll,ll>> ans;
    for(auto x:p){
        ans.push_back({x.second,x.first});
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x.second<<' ';
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