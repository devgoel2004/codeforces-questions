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
double dist(ll a,ll b, ll c, ll d){
    // cout<<pow((a-c),2)<<'\n';
    return sqrt(abs(pow((a-c),2)+pow((b-d),2)));
}
void solve(){
    ll px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    double a1 = max(dist(px,py,ax,ay),dist(0,0,ax,ay));
    double b1 = max(dist(px,py,bx,by), dist(0,0,bx,by));
    double ao = max({dist(0,0,ax,ay),dist(px,py,bx,by),dist(ax,ay,bx,by)/2});
    double bo = max({dist(0,0,bx,by),dist(px,py,ax,ay),dist(ax,ay,bx,by)/2});
    double ans = min({a1,b1,ao,bo});
    cout<<setprecision(10)<<ans<<'\n';
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