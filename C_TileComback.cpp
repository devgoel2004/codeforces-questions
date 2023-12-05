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
    ll n,k;
    cin>>n>>k;
   // unordered_map<int,int> freq;
    vector <ll> A(n);
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }
    ll first = A[0], last = A[n-1];
    ll count=0,pos=0;
    for(ll i=0;i<n;i++){
        if(A[i]==first){
            count++;
        }
        if(count==k){
            pos=i;
            break;
        }
    }
    if(count<k){
        cout<<"NO\n";
        return;
    }
    else{
        if(first==last){
            cout<<"YES\n";
            return;
        }
        count=0;
        for(int i=pos;i<n;i++){
            if(A[i]==last){
                count++;
            }
            if(count==k){
                break;
            }
        }
        if(count<k){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    // for(ll i=0;i<n;i++){
    //     freq[A[i]]++;
    // }
    // bool flag = false;
    // for(auto x:freq){
    //     if(x.first == A[0]){
    //         if(x.second >= k){
    //             flag = true;
    //             break;
    //         }
    //         else{
    //             cout<<"NO\n";
    //             return;
    //         }
    //     }
    // }
    // for(auto x: freq){
    //     if(x.first == A[n-1]){
    //         if(flag){
    //             if(x.second >= k){
    //                 cout<<"YES\n";
    //                 break;
    //             }else{
    //                 cout<<"NO\n";
    //                 break;
    //             }
    //         }
    //     }
    // }
    // // cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
};