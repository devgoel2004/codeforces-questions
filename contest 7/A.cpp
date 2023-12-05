#include<bits/stdc++.h>
#include<string>
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
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int count=0;
   for(int i=0;i<=6;i++){
    if(a.find(b)!=-1){
        count=1;
        cout<<i<<'\n';
        break;
    }
    a+=a;
   }
   if(count==0){
    cout<<-1<<'\n';
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