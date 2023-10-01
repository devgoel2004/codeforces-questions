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
int solve(int arr[]){
    long long n= 3;
        long long max_val = LONG_MIN;
        for(long long i=0;i<n-2;i++){
            for(long long j=i+1;j<n-1;j++){
                for(long long k=j+1;k<n;k++){
                    long long ans = (long)(arr[i]-arr[j])*arr[k];
                    max_val = max(ans,max_val);
                }
            }
        }
        if(max_val<0){
            return 0;
        }
        return max_val;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // ?cin>>t;
    while(t--){
        int arr[]= {100000,1,100000};
        solve(arr);
    }
    return 0;
}