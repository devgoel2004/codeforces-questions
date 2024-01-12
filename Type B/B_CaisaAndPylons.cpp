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
    vector <ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    int diff = 0;
    // int cnt=a[0];
    for(int i=0;i<n-1;i++){
        diff += a[i]-a[i+1];
        if(diff<0){
            ans += abs(diff);
            diff=0;
        }
    }
    cout<<ans<<'\n';
    // cout<<ans<<" "<<diff<<'\n';
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