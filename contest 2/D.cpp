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
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='B'){
            count++;
            // int j=1;
            i=i+k-1;
            // cout<<i<<'\n';
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