#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    ll n = s1.size();
    ll init_zero_s1 = 0,final_zero_s1=0;
    ll init_zero_s2 = 0,final_zero_s2=0;
    ll init_one_s1 = 0,final_one_s1=0;
    ll init_one_s2 = 0,final_one_s2=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='0'){
            init_zero_s1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s1[i]=='0'){
            final_zero_s1=i;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        if(s2[i]=='0'){
            init_zero_s2=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s2[i]=='0'){
            final_zero_s2=i;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        if(s1[i]=='1'){
            init_one_s1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s1[i]=='1'){
            final_one_s1=i;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        if(s2[i]=='1'){
            init_one_s2=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s2[i]=='1'){
            final_one_s2=i;
            break;
        }
    }
    cout<<init_one_s1<<' '<<init_one_s2<<'\n';
    cout<<final_one_s1<<" "<<final_one_s2<<'\n';
    cout<<init_zero_s1<<" "<<init_zero_s2<<'\n';
    cout<<final_zero_s1<<" "<<final_zero_s2<<'\n';

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