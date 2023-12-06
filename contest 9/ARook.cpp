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
    string s;
    cin>>s;
    int x = s[0]-61;
    int y = s[1]-48; 
    for(char c='a';c<='h';c++){
        if(c!=s[0]){
            cout<<c<<s[1]<<" ";
        }
    }
    for(int i=1;i<=8;i++){
        if(i!=y){
            cout<<s[0]<<i<<" ";
        }
    }
    cout<<'\n';
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