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
    vector <ll> b(n);
    if(arr[0]==1){
        b[0]=2;
    }
    else{
        b[0]=1;
    }
    int count=b[0];
    for(ll i=1;i<n;i++){
        count++;
        if(arr[i]==count){
            count++;
        }
        if(count<b[i-1]){
        b[i]+=b[i-1]+b[i]+1;}
        b[i]=count;
    
    }
    
    cout<<b[n-1]<<endl;
    // cout<<'\n';
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