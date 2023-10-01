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
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> arr(n);
    vector <ll> arr2(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   for(ll i=0;i<n;i++){
    cin>>arr2[i];
   }
   sort(arr.begin(),arr.end());
   sort(arr2.begin(),arr2.end());
   ll s=0;
   for(ll i=0;i<n;i++){
    s+=arr[i];
   }
   if(k==1){
    if(arr[0]>=arr2[m-1]) cout<<s;
    else cout<<s-arr[0]+arr2[m-1];
   }
   else if(k==2){
    if(arr[0]<arr2[m-1]){
        s=s-arr[0]+arr2[m-1];
        s=s+arr2[0]-max(arr2[m-1],arr[n-1]);
    }
    else{
        s=s-arr[n-1]+arr2[0];
    }
    cout<<s;
   }
   else{
    ll x =min(arr[0],arr2[0]);
    ll y= max(arr[n-1],arr2[m-1]);
    ll s1=0;
    if(arr[0]<arr2[m-1]){
        s=s-arr[0]+arr2[m-1];
        s1=s;
        s=s+x-y;
    }
    else{
        s=s-arr[n-1]+arr2[0];
        k-=2;
        if(k%2==0) cout<<s;
        else{
            cout<<s1;
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
        cout<<'\n';
    }
    return 0;
}