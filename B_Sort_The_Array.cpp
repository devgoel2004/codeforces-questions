#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define M 10e7
bool isIncreasing(vector <ll>arr, int low, int high){
    bool flag = false;
    for(int i=low+1;i<high;i++){
        if(arr[i-1]>arr[i]){
            flag = true;
        }
        else{
            flag = false;
        }
    }
    return flag;
}
bool isDecreasing(vector <ll> arr, int low, int high){
    bool flag = false;
    for(int i=low+1;i<high;i++){
        if(arr[i-1]<arr[i]){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    return flag;
}
void solve(){
    ll n;
    cin>>n;
    vector <ll> arr;
    range(0,i,n){
        cin>>arr[i];
    }
    bool f=false,idx=0;
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            continue;
        }
        else{
            idx=i;
            count++;
            break;
        }
    }
    for(int i=idx+1;i<n;i++){
        if(arr[i]>arr[i+1]){
            continue;
        }
        else{
            f=false;
            break;
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