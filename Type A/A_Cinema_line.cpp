#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define F first
#define S second
#define range(a,i,n) for(int i=a;i<n;i++)
#define m 10e7
void solve(){
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tf=0;
    int fv=0;
    if(arr[0]!=25){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==25){
            tf++;
        }
        else if(arr[i]==50){
            if(tf<1){
                cout<<"NO\n";
                return;
            }
            tf--;
            fv++;
        }
        else{
            if(tf==0 || (fv==0 && tf<3)){
                cout<<"NO\n";
                return;
            }
            else{
                if(fv==0) tf-=3;
                else{
                    tf-=1;
                    fv-=1;
                } 
            }
        }
        // cout<<"YES\n";
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}