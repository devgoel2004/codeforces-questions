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
    string s;
    cin>>s;
    ll sum=0;
    // int cnt=0;
    if(s.size()==1){
        cout<<0<<'\n';
        return;
    }
    int cnt=1;
    for(auto x:s){
        sum+=x-'0';
    }
    while(sum>9){
        int x=0;
        while(sum!=0){
            x+=sum%10;
            sum=sum/10;
        }
        cnt++;
        sum=x;
    }
    cout<<cnt<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}