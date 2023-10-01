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
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }
    if(s.size()==1){
        cout<<2<<'\n';
        return;
    }
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]>=i){
            count++;
        }
    }
    cout<<count<<'\n';
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