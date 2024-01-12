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
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    // vector <ll> a(n);
    // a=v;    
    ll smallest=v[0];
    for(int i=1;i<n;i++){
        smallest = min(smallest,v[i]);
    }
    ll pos=0;
    for(int i=0;i<n;i++){
        if(v[i]==smallest){
            pos=i;
            break;
        }
    }
    bool flag=true;
    for(int i=pos+1;i<n;i++){
        if(v[i]<v[i-1]){
            flag=false;
            break;
        }
    }
    if(!flag){
        cout<<-1<<'\n';
    }
    else{
        cout<<pos<<'\n';
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