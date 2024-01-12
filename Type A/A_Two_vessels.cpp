#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c;
    int A,B;
    cin>>a>>b>>c;
    if(a==b){
        cout<<0<<'\n';
    }
    else{
        A =max(a,b);
        B = min(a,b);
        // cout<<A<<" "<<B;
        int diff =A-B;
        int count=0;
        while(A>B){
            if(diff>=c){
                A=A-c;
                B+=c;
                diff-=2*c;
                count++;
            }
            else{
                A-=diff;
                count++;
            }
        }
        cout<<count<<'\n';
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