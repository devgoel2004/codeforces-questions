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
    ll n;
    cin>>n;
    vector <ll> arr(2*n);
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<" "<<arr[2*n-i-1]<<"\n";
        v.push_back(make_pair(arr[i],arr[2*n-i-1]));
    }
    ll x=0,y=0;
    for(int i=1;i<n;i++){
        x+=abs(v[i].first-v[i-1].first);
        y+=abs(v[i].second-v[i-1].second);
    }
    cout<<x+y<<'\n';
     for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<'\n';
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