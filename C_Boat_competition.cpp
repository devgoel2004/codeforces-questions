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
ll  sum(ll a[],ll n, ll s){
    ll i=0,j=n-1,c=0;
    while(i<j){
        ll x=a[i]+a[j];
        if(s==x){
            c++;
            i++;
            j--;
        }
        else if(x>s)j--;
        else i++;
    }
    return c;
}
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   ll h[101]= {0};
   for(int i=0;i<101;i++){
    h[i]=sum(a,n,i);
   }
   sort(h,h+101);
   cout<<h[100]<<'\n';
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