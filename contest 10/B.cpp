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
long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 

long long lcm(long long a, long long b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==1 || b==1){
        cout<<long(pow(a*b,2))<<'\n';
        return;
    }
    ll ans;
    if(lcm(a,b)==a){
        ans=a/b;
        ans = ans*lcm(a,b);
        cout<<ans<<'\n';       
    }
    else if(lcm(a,b)==b){
        ans =b/a;
        ans = ans*lcm(a,b);
        cout<<ans<<'\n';
    }else{
        cout<<long(lcm(a,b))<<'\n';
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