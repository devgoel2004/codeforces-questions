#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
void solve(){
    ll x,y;
    cin>>x>>y;
    int arr[x];
    range(0,i,x){
        cin>>arr[i];
    }
    vector <pair<int,int>> v;
    range(0,i,x){
        v.push_back({arr[i],i});
    }
    vector <int> ans;
    sort(v.begin(),v.end());
    
    // v[x-1].F = v[x-1].F-y;
    while(v[x-1].F>0){
    for(int i=x-1;i>=0;i--){
        if(v[i].F>0){
            v[i].F-=x;
        }
        else{
            ans.push_back(v[i].S);
        }
    }
    }
    for(auto n:v){
        cout<<n.F<<" "<<n.S<<'\n';
    }
    for(auto x:ans){
        cout<<x<<" ";
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