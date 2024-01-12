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
   ll n;
	cin >> n;
 
	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];
	map<ll, ll> freq;
	for(auto i : arr) freq[i]++;
	vector<ll> ans;
	for(auto i : freq) {
		if(i.second > 1) ans.push_back(i.first);
	}
	if(ans.size() < 2) {
		cout << "-1" << '\n';
		return;
	}
	for(auto i : arr) {
		if(i == ans[0]) {
			ans[0] = -1;
			cout << "2" << " ";
		} else if(i == ans[1]) {
			ans[1] = -1;
			cout << "3" << " ";
		} else cout << "1" << " ";
	}
	cout << '\n';
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