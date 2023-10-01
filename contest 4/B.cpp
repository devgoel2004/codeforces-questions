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
    int n;
    cin>>n;
    vector <unordered_map <int,int>> v;
    unordered_map<int,int> s;
    for(int i=0;i<n;i++){
        int k,x;
        cin>>k;
        unordered_map <int,int> a;
        for(int j=0;j<k;j++){
            cin>>x;
            s[x]++;
            a[x]++;
        }
        v.push_back(a);
    }
    int ans=0;
    for(int i=1;i<=50;i++){
        vector <unordered_map<int,int>> temp;
        for(int j=0;j<n;j++){
            if(v[j].find(i)==v[j].end()){
                temp.push_back(v[j]);
            }
        }
        unordered_map <int,int> mp;
        for(int j=0;j<temp.size();j++){
            for(auto k:temp[j]){
                mp[k.first]++;
            }
            
        }
        if(mp.size()!=s.size()){
            if(ans<mp.size()){
                ans=mp.size();
            }
        }
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