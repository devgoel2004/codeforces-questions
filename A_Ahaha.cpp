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
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <ll>v;
    for(int i=0;i<n-1;i+=2){
        if(arr[i]==arr[i+1]){
            v.push_back(arr[i]);
            v.push_back(arr[i+1]);
        }
        else{
            v.push_back(0);
        }
    }
    cout<<v.size()<<'\n';
    for(auto x:v){
        cout<<x<<' ';
    }
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