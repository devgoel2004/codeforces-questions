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
    char arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    char min = 'C';
    int posx,posy;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<=min){
                min = arr[i][j];
                posx=i;
                posy=j;
            }
        }
    }
    printf("%c",min);
    min = 'C';
    int posxx, posyy;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((abs(posx-i)==2 || abs(posy-j)==2)){
                continue;
            }
            else if((abs(posx-i)==1 ||  abs(posy-j)==1)){
                if(arr[i][j]<min){
                    min = arr[i][j];
                    posxx = i;
                    posyy=j;
                }
            }
        }
    }
    printf("%c",min);
    // cout<<posxx<<" "<<posyy<<'\n';
    min = 'C';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
              if((abs(posxx-i)==2 || abs(posyy-j)==2)){
                continue;
            }
            else if((abs(posxx-i)==1 || abs(posyy-j)==1)){
                if(arr[i][j]<min && i!=posx && j!=posy){
                    min = arr[i][j];
                }
            }
        }
    }
    printf("%c",min);

}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}