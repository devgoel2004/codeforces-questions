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
    ll n,a;
    cin>>n>>a;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll product = 1;
    for(ll i=0;i<n;i++){
        product*=arr[i];
    }
    vector <ll>ans;
    if(2023%product!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        ll i=1;
        while(i<a){
            cout<<1<<" ";
            i++;
        }
        cout<<2023/product<<'\n';
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