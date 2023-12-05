#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
//dev goel
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
#define e end
#define b begin
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n,x,y,z;
    cin>>n;
    if(n<7){
        cout<<"NO\n";
        return;
    }
    if(n%3==0){
        x=1,y=4,z=n-5;
        if(x==z || y==z){
            cout<<"NO\n";
            return;
        }
        else{
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<endl;
            return;
        }
    }
    else{
        x=1,y=2,z=n-3;
        if(x==z|| y==z){
            // cout<<x<<y<<z<<'\n';
            cout<<"NO\n";
            return;
        }
        else{
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<endl;
            return;
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