#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
void solve(){
        ll n,x,l = 1;
        ll r = 0;
        cin>>n>>x;
        vector < ll > arr(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>arr[i];
        }
        r = 1e10;
        while(l < r-1) {
 
            ll total = 0;
            ll mid = l+(r-l)/2;
            for(ll i = 0 ; i < n ; i++) {
                if(arr[i] < mid) {
                    total+=(mid-arr[i]);
                }
            }
            if(total > x) {
                r=mid;
            }
            else {
                l=mid;
            }
        }
        cout<<l<<endl;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}