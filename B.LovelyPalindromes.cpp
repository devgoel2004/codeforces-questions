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
    string str;
    cin>>str;
    int n = str.size();
    string ans = str;
    int i=n-1;
    while(n!=0){
        ans.push_back(str[i]);
        i++;
        n--;
    }
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
    return 0;
}