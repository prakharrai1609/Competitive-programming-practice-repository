
/*
Q.
Ladder size N
Max jump K
Find number of ways to reach the top

*/

// ITERATIVE VERSION

#include<bits/stdc++.h>
using namespace std;

#define FIO  		  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll			  long long
#define vcll 		  vector<ll>
#define pb			  push_back
#define endl 		  '\n'

#define pika(x) 	  cerr << #x << ' ' << x << endl;
#define FOR(i,a,b)    for (int i = a; i < b; i++)

int main() {
	FIO;

	int n, k;
	cin >> n >> k;

	vector<int> dp(n + 1, 0);
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (i >= j) {
				dp[i] += dp[i - j];
			}
		}
	}

	cout << dp[n];
}
