#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
int calculateDiff(char a, char b){
    int diff = abs(a-b);
    return min(diff,10-diff);
}
void solve(){
    int p,q;
    cin>>p>>q;
    string s;
    string k;
    cin>>s>>k;
    int ans=INT_MAX;
    for(int i=0;i<=p-q;i++){
        int diff=0;
        for(int j=0;j<q;j++){
            diff += calculateDiff(s[i+j],k[j]);
        }
        // cout<<diff<<'\n';
        ans = min(ans,diff);
    }
    cout<<ans<<'\n';
    // return 0;
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