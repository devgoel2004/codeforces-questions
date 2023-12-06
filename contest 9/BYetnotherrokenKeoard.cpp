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
    string str;
    cin>>str;
    int n = str.size();
    // stack <char> s;
    int pos = 0;
   vector <pair <int,char>> low;
   vector <pair<int,char>> upper;
   for(int i=0;i<n;i++){
    if(str[i]>=65 && str[i]<=90 && str[i]!='B'){
        upper.push_back({i,str[i]});
    }else if(str[i]>=97 && str[i]<=122 && str[i]!='b'){
        low.push_back({i,str[i]});
    }else if(str[i]=='B' && upper.size()>0){
        upper.pop_back();
    }else if(str[i]=='b' && low.size()>0){
        low.pop_back();
    }
   }
   vector <pair<int,char>> ans;
   for(int i=0;i<upper.size();i++){
    int a = upper[i].first;
    char x = upper[i].second;
    ans.push_back({a,x});
   }
   for(int i=0;i<low.size();i++){
    int a = low[i].first;
    char x = low[i].second;
    ans.push_back({a,x});
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i].S;
   }
   sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++){
    cout<<ans[i].second;
   }
   cout<<'\n';
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