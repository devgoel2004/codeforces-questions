#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
int a[101]={0};
void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool f = false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"YES\n";
            f=true;
            break;
        }
    }
    if(!f){
        cout<<"NO\n";
    }
    // cout<<"NO\n";

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