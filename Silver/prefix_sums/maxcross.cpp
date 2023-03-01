#include <bits/stdc++.h>
using namespace std;

#define F0R(i, a) for(int i = 0; i < a; i++)

void setIO(){
	freopen("maxcross.in", "r", stdin);
	freopen("maxcross.out", "w", stdout);
}

int n, k, b;
bool off[100000];
int dp[100001];

int main(){
	cin >> n >> k >> b;
	F0R(i, b){
		int pos; cin >> pos;
		off[pos] = true;
	}
	dp[0] = 0;
	F0R(i, n){
		dp[i+1] = dp[i] + off[i];
	}
	int ans = 0;
	F0R(i, n-k+1){
		ans = min(ans, dp[i+k]-dp[i]);
	}
	cout << ans << endl;
}
