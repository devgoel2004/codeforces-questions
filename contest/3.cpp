#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
bool ableToResist(int arr[], int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            k=k-arr[i];
        }
        else{
            return false;
            break;
        }
    }
    return true;
}
void solve(){
    int n,h;
    cin>>n>>h;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<h){
        cout<<0<<'\n';
        return;
    }
   sort(arr,arr+n);
   int x=0;
   int i=0;
   while(sum>=h){
    sum-=arr[i++];
   }
   i--;
   cout<<arr[i]<<'\n';
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