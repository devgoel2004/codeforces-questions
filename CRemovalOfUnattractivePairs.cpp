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
    string s;
    cin>>s;
    stack <int> stk;
    for(int i=0;i<n;i++){
        if(stk.empty()){
            stk.push(s[i]);
        }
        else if(s[i]==stk.top()){
            stk.push(s[i]);
        }
        else{
            stk.pop();
        }
    }
    cout<<stk.size()<<'\n';
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