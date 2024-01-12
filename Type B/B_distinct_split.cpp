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
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector <int> v1;
    vector <int> v2;
    set <char> s1;
    set <char>s2;
    for(int i=0;i<n;i++){
        s1.insert(str[i]);
        v1.push_back(s1.size());
    }
    for(int i=n-1;i>=0;i--){
        s2.insert(str[i]);
        v2.push_back(s2.size());
    }
    reverse(v2.begin(),v2.end());
    int maxi=0;
    for(int i=0;i<v1.size()-1;i++){
        maxi =max(v1[i]+v2[i+1],maxi);
    }
    cout<<maxi<<'\n';
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