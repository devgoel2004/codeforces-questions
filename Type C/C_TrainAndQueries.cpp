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
    ll n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a,b;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        bool flag=false;
        int x=0;
        for(int j=0;j<n;j++){
            if(arr[j]==a){
                flag=true;
                x=j;
                // cout<<x;
                break;
            }
        }
        if(flag==false){
            cout<<"NO\n";
            // break;
        }else{
            flag = false;
             for(int j=x;j<n;j++){
                if(arr[j]==b){
                 flag=true;
                 break;
                }
             }
            if(flag==false){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
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