#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b>a) swap(a,b);
    if(b==0) return a;
    else return gcd(b,a-b);
}
int solve(){
    int l,r;
    cin>>l>>r;
   for(int i=l;i<=r;i++){
    if(i!=2 && i%2==0){
        cout<<2<<" "<<i-2<<'\n';
        return 0;
    }
   }
   for(int i=2;i<=sqrt(l);i++){
    if(l%i==0){
        cout<<i<<" "<<l-i<<'\n';
        return 0;
    }
   }
    cout<<-1<<'\n';
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}