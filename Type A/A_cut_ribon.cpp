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
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n,arr[3];
    cin>>n>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    while(n!=0){
        if(n%arr[0]==0){
            cout<<n/arr[0]<<'\n';
            break;
        }
        else if(n%arr[1]==0){
            cout<<n/arr[1];
            break;

        }
         else if(n%(arr[0]+arr[1])==0){
            cout<<n/(arr[0]+arr[1])*2;
            break;
        }
        else if(n%arr[2]==0){
            cout<<n/arr[2];
            break;
        }
       
        else if(n%(arr[0]+arr[2])==0){
            cout<<n/(arr[0]+arr[2])*2;
            break;
        }
        else if(n%(arr[1]+arr[2])==0){
            cout<<n/(arr[1]+arr[2])*2;
            break;
        }
        else{
            cout<<n/(arr[1]+arr[2]+arr[0])*3;
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}