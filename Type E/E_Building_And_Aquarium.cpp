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
bool required(vector<ll> arr, ll height, ll k){
    ll sum=0;
    ll n =arr.size();
    for(ll i=0;i<n;i++){
        if(arr[i]<height){
            sum+=height-arr[i];
        }
        else{
            continue;
        }
    }
    return sum<=k;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll low = 0,ans=0, high = 2e9;
    // cout<<high<<'\n';
    while(low<=high){
        ll mid = (high+low)/2;
        // cout<<mid<<'\n';
        if(required(v,mid,k)){
            // cout<<ans<<'\n';
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans<<'\n';
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