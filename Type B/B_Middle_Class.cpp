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
    ll n,k;
    cin>>n>>k;
    vector <ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    // int v[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i] += arr[i+1];
    }
    int count=0;
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        // cout<<x<<" ";
        if(arr[i]/(i+1)<k){
            // cout<<count<<"\n";
            break;
        }
        else{
            count++;
        }
    }
    cout<<count;
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