#include<bits/stdc++.h>
using namespace std;
#define ll double
void solve(){
    string str;
    cin>>str;
    
    ll n=str.size();
    // int count=0;
    // ll pos=n-1;
    ll flag=0;
    ll num=n;
    for(ll i=n-1;i>=0;i--){
        if(flag==1){
        if(str[i]<='8'){
            str[i]++;
        }
        else if(str[i]=='9'){
            str[i]='0';
            num=i;
            flag=1;
            continue;
        }    
        }
        if(str[i]>='5'){
            num=i;
            str[i]='0';
            flag=1;
        }
        else{
            flag=0;
        }
    }

    if(flag==1){
        str='1'+str;
    }
    if(num!=n){
        n=str.size();
        for(ll i=n-1;i>=num+1;i--){
            str[i]='0';
        }
    }
    cout<<str<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}