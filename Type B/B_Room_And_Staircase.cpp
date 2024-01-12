#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    // string str=s;
    // reverse(str.begin(),str.end());
    int count=0;
    // int maxi=0;
    bool flag=false;
    // cout<<'\n';
    for(int i=n-1;i>=0;i--){
        if(s[i]!='1'){
            // cout<<"1";
            count++;
        }
        else if(s[i]=='1'){
            flag=true;
            break;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            flag=true;
            break;
        }
        else{
            cnt++;
        }
    }
    count=min(cnt,count);
    // cout<<count<<'\n';
    if(flag==true){
        cout<<2*(n-count)<<'\n';
    }
    else{
        // cout<<count<<"\n";
        cout<<n<<"\n";
    }
    // cout<<n-count<<'\n';
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}