#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
bool isEven(int x){
    return (!(x&1));
}
bool check(vector <ll> v, ll mid, ll c){
    ll val = 0;

    for(auto x: v){
        val += (x+2*mid)*(x+2*mid);
    }
    return val>=c;
}
void solve(){
    ll n,c,x;
    cin>>n>>c;
    vector <ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll low = 0, high = 1e9;
    while(low<=high){
        ll mid = low+(high-low)/2;
        ll val = 0;
        for(auto x:a){
            val += (x+2*mid)*(x+2*mid);
            if(val>c) break;
        }
        if(val == c){
            cout<<mid<<'\n';
            break;
        }
        else if(val < c){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    // cout<<high<<'\n';

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