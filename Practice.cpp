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
        ll n,k;
        cin>>n>>k;
        ll even=0,odd=0;
        if(k==1){
                cout<<-1<<'\n';
                return;
        }
        else if(n==2){
            if(k%2==0){
                cout<<k/2<<" "<<k/2<<'\n';
            }
            else{
                cout<<k/2<<" "<<k-k/2<<'\n';
            }
            return;
        }
        else{
                if(k%2==0){
                        even = k/2;
                        ll x=1;
                        for(int i=0;i<n/2-1;i++){
                                cout<<x<<" ";
                                x+=2;
                        }
                        cout<<even-x+2<<" ";
                        x=2;
                        for(int i=0;i<n/2-1;i++){
                            cout<<x<<" ";
                            x+=2;
                        }
                        cout<<even-x+2<<'\n';
                }
                else{
                    even = k/2;
                    odd = k-even;
                    cout<<odd<<'\n';
                    ll x=1;
                    for(int i=0;i<n/2;i++){
                        if(i==n/2){
                            cout<<odd-x<<" ";
                        }
                        else{
                            cout<<x<<" ";
                        }
                        x+=2;
                    }
                   
                    x=2;
                    for(int i=0;i<n/2-1;i++){
                        cout<<x<<" ";
                        x+=2;
                    }
                    cout<<even-x+2<<'\n';
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