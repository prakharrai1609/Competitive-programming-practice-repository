/*
Q.
Ladder size N
Max jump K
Find number of ways to reach the top

*/


#include<bits/stdc++.h>
using namespace std;

#define FIO  		  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll			  long long
#define vcll 		  vector<ll>
#define pb			  push_back
#define endl 		  '\n'

#define pika(x) 	  cerr << #x << ' ' << x << endl;
#define FOR(i,a,b)    for (int i = a; i < b; i++)

vector<int> dp;
int steps(int n, int k) {
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (dp[n] != -1) return dp[n];

	int ans = 0;
	for (int i = 1; i <= k; i++)
		ans += steps(n - i, k);

	return dp[n] = ans;
}

int main() {
	FIO;

	int n, k;
	cin >> n >> k;
	dp.resize(n + 1, -1);

	cout << steps(n, k);
}
