#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        for(int i=1;i<=a;i++){
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    else{
        int diff = b-a+1;
        cout<<diff<<'\n';
        vector <int> v;
        int cnt=2;
        while(diff>0){
            if(diff<cnt){
                v.push_back(diff);
            //  diff =diff-diff;
            }
            v.push_back(cnt);
            cnt++;
            diff=diff-cnt;
        }
        int x = diff+1;
        int c=2;
        for(int i=1;i<=a;i++){
            while(i!=x){
                cout<<i<<" "<<'\n';
                i=i+c;
                c++;
            }
        }
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