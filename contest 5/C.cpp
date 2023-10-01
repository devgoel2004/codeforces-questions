#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll sum = n*(n+1)/2;
    ll min = k*(k+1)/2;
    ll max = (2*n-k+1)*k/2;
 //   cout<<min<<" "<<max<<'\n';
    if(x>=min && x<=max){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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