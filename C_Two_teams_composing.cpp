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
    ll n;
    cin>>n;
    vector <ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    set<ll>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int diff = s.size();
    int same=0;
    int max_same=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            same+=1;
        }
        else{
            same=0;
        }        
        max_same=max(max_same,same);
    }
    max_same +=1;
    if(diff==max_same){
        cout<<diff-1<<'\n';
    }
    else{
        cout<<min(diff,max_same)<<'\n';
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