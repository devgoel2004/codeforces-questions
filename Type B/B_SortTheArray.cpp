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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector <ll> a(n);
    a=v;
    sort(v.begin(),v.end());
    ll pos=-1;
    for(ll i=0;i<n;i++){
        if(a[i]!=v[i]){
            break;
        }
        else{
            pos=i;
        }
    }
    if(pos==n-1){
        cout<<"YES\n";
        cout<<1<<" "<<1<<'\n';
        return;
    }
    cout<<a[pos]<<'\n';
    if(pos==0){
        ll end=0;
        for(int i=0;i<n;i++){
            if(a[i]==v[pos]){
                end=i;
                break;
            }
        }
        reverse(a.begin()+pos,a.begin()+end+1);
        for(int i=0;i<n;i++){
            // cout<<x<<" ";
            if(a[i]!=v[i]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
        cout<<pos+1<<" "<<end+1<<'\n';
    }
    // cout<<pos+1<<" "<<end+1<<'\n';
    cout<<pos<<'\n';
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