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
    ll n,q;
    cin>>n>>q;
    vector <ll> a(n);
    vector <ll> k(q);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<q;i++){
        cin>>k[i];
    }
    sort(a.begin(),a.end());
    for(auto x:k){
        ll low=0,high = n-1,i=0;
        while(low<=high){
            ll mid = low+(high-low)/2;
            if(a[mid]<x){
                mid++;
            }
        }
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