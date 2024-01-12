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
    string str;
    cin>>str;
    string a,b;
    ll x;
    bool flag=false;
    for(ll i=0;i<str.length();i++){
        if(str[i]=='2'){
            a.push_back('1');
        }
        else if(str[i]=='1'){
            a.push_back('1');
            x=i;
            flag=true;
            break;
        }
        else{
            a.push_back('0');
        }
    }
    if(flag){
        for(int i=x+1;i<str.length();i++){
            a.push_back('0');
        }   
    }
    for(int i=0;i<str.length();i++){
        b.push_back(str[i]-a[i]+48);
    }
    cout<<a<<endl;
    cout<<b<<endl;
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