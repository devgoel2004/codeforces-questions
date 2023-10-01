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
    ll n,x,y;
    cin>>n>>x>>y;
    // vector <ll> arr(n);
    ll max=n;
    ll sumX=0,sumY=0;
    for(ll i=1;i<=n;i++){
        if(i%x==0){
            sumX+=max;
            max = max-1;
        }
        // cout<<sumX<<" ";
    }
    // cout<<endl;
    ll min=1;
    max=n;
    for(ll i=1;i<=n;i++){
        if(i%y==0 && i%x!=0){
            sumY+=min;
            min+=1;
        }
        else if(i%x==0 && i%y==0){
            max = max-(i/x)+1;
            sumY +=max;
        }
        // cout<<sumY<<" ";
    }
    // cout<<'\n';
    // cout<<sumX<<" "<<sumY<<"\n";
    cout<<sumX-sumY<<'\n';
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