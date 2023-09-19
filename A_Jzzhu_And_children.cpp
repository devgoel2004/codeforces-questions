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
    int p,q;
    cin>>p>>q;
    int a[p],b[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
        b[i]=a[i]/q+(a[i]%q>0);
    }
    int l = *max_element(b,b+p),ans=0;
    for(int i=0;i<p;i++){
        if(b[i]==l){
            ans=i+1;
        }
    }
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}