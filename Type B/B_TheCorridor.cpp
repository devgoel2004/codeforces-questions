#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int solve(){
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans, v[i].first+(v[i].second-1)/2);
    }
    cout<<ans<<endl;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}