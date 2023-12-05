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
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int hash[100001]={0};
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    for(auto x:hash){
        cout<<x<<' ';
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