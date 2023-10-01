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
    int start = 0,end=9;
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                int diffx =min(i-0,9-i);
                int diffy = min(j-0,9-j);
                int diff = min(diffx,diffy);
                count+=diff+1;
            }
        }
    }
    cout<<count<<'\n';
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