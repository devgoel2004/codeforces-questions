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
void solve(){
    ll n,x;
    cin>>n;
    cout<<n<<'\n';
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    int count=0;
    while(n>1){
        int i=1;
        while(n>0){
            if(n==2 && i==1){
                n=n-2;
                i++;
            }
            else if(n<2*i-(i-1)){
                n=n-2*i-(i-1);
                i++;
            }
            else{
                count++;
                break;
            }
        }
    }
    cout<<count<<'\n';
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