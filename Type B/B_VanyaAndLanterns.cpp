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
    ll n,l;
    cin>>n>>l;
    vector <ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll maxi=INT_MIN;
    for(int i=1;i<n;i++){
        maxi = max(maxi,v[i]-v[i-1]);
    }
    // cout<<maxi<<'\n';
    double ans = static_cast<double>(maxi) / 2.0;
     v[0] = max(v[0],l-v[n-1]);
    if(ans<v[0]){
        cout<<v[0]<<'\n';
        return;
    }
    // cout<<v[0]<<'\n';
    cout<<setprecision(20)<<ans<<'\n';

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