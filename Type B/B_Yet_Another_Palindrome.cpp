#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
bool isPalindrome(vector <ll> a){
    int n = a.size();
    // flag = true;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            return false;
            break;
        }
    }
    return true;
}
void solve(){
   ll n;
   cin>>n;
   ll arr[n+1];
   for(ll i=0;i<n+1;i++){
    arr[i]=-1;
   }
    int count=0;
    for(ll i=0;i<n;i++){
        ll p;
        cin>>p;
        if(arr[p]==-1)
            arr[p]=i;
        else{
            if(i-arr[p]>=2){
                count=1;
            }
        }
    }
    if(count){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
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