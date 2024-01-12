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
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    if(k%2==0){
        sort(str.begin(),str.end());
        cout<<str<<'\n';
    }
    else{
        string a,b;
        for(int i=0;i<n;i++){
            if(i&1){
                a.push_back(str[i]);
            }
            else{
                b.push_back(str[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll r=0,l=0;
        for(int i=0;i<n;i++){
            if(i&1){
                str[i]=a[r++];
            }
            else{
                str[i]=b[l++];
            }
        }
        cout<<str<<'\n';
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