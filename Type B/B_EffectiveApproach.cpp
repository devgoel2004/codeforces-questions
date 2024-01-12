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
bool isLower(char s){
    if(s>=97 && s<=122){
        return true;
    }return false;
}
bool isUpper(char s){
    if(s>=65 && s<=90){
        return true;
    }
    return false;
}
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n,a,b;
    cin>>n;
    ll arr[100001]={0};
    for(ll i=0;i<n;i++){
        cin>>a;
        arr[a]=i+1;
    }
    ll m;
    cin>>m;
    ll V = 0,P=0;
    for(ll i=0;i<m;i++){
        cin>>b;
        V+=arr[b];
        P+=(n+1-arr[b]); 
        // V+=arr[b[i]];

    }
    
    cout<<V<<" "<<P<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}