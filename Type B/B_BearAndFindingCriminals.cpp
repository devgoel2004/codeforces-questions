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
bool isLower(char s){
    if(s>=97 && s<=122){
        return true;
    }return false;
}
bool isUpper(char s){
    if(s>=65 && s<=90){
        return true;
    }
    return false;
}
bool isEven(int x){
    return (!(x&1));
}
void solve(){
    ll n,a;
    cin>>n>>a;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    a=a-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            cnt++;
        }
    }
    int small = min(a,n-a);
    // cout<<small<<"\n";
    // cout<<cnt<<'\n';
    if(small == a){
        int j=0;
        for(int i=a;i>=0;i--){
        if(v[i]!=v[a+j]){
            cnt--;
        }
        j++;
        }
    }
    else{
        int j=0;
        for(int i=a+1;i<n;i++){
            // cout<<a-j-1<<'\n';
            if(v[i]!=v[a-j-1]){
                // cout<<i<<" "<<a-j-1<<'\n';
                cnt--;
            }
            j++;
        }
    }
    cout<<cnt<<'\n';
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