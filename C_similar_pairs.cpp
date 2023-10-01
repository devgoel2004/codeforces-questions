#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
void solve(){
    ll n;
    cin>>n;
    vector <ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll odd=0,even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even%2==0 && odd%2==0){
        cout<<"YES\n";
        return;
    }
    else{
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])==1){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
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