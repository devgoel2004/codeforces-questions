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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve(){
    ll m,n;
    cin>>m>>n;
    vector <pair<ll,ll>> p;
    ll x,y;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end(),sortbysec);
    
    reverse(p.begin(),p.end());
    ll sum=0;
    for(auto x:p){
        if(x.first<=m){
            sum+=x.second*x.first;
            m-=x.first;
        }
        else{
            sum+=x.second*m;
            m-=m;
        }
    }
    cout<<sum<<'\n';
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