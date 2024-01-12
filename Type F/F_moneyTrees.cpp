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
    //greedy approach
    ll n,k;
    cin>>n>>k;
    vector <ll> a(n);//no of fruits
    vector <ll> h(n);//height of tree
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    int i=0,j=0;
    ll sum=0,ans=0;
    while(i<n){
        if(h[i-1]%h[i]!=0 && i>0){
            sum=0;
            j=i;
        }
        sum+=a[i];
        while(sum>k && j<=i){
            sum-=a[j];
            j++;
        }
        ll len = i-j+1;
        ans =max(ans,len);
        i++;
    }
    cout<<ans<<'\n';
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