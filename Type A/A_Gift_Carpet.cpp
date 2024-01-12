#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int solve(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='v'){
                x=j;
                count++;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=x;j<m;j++){
            if(arr[i][j]=='i'){
                x=j;
                count++;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=x;j<m;j++){
            if(arr[i][j]=='k'){
                x=j;
                count++;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=x;j<m;j++){
            if(arr[i][j]=='a'){
                x=j;
                count++;
                break;
            }
        }
    }
    // cout<<count<<'\n';
    if(count==4 || count%16==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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