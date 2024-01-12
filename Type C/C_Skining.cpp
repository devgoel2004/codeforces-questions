#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
int fact(int n){
    return (n*(n+1))/2;
}
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> v;
    int c=0;
    range(0,i,n){
        if(a[i]<=q) c++;
        else{
            if(c>=k) v.push_back(c);
            c=0;
        }
    }
    if(c>=k) v.pb(c);
    if(v.size()==0) cout<<0;
    else{
        int ans=0;
        for(auto& i:v){
            ans+=fact(i-k+1);
        }
        cout<<ans;
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}