/*
Q.
Given an array of positive integers, where each element represents the max no of steps you can jump forward in the array.
Find minimum jumps needed to reach the final index.

inp : 3 4 2 1 2 3 10 1 1 1 2 5
ans : 4

link : https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

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

int minJumps(vector<int> arr, int n) {
	// Your code here
	if (!arr[0]) {
		if (n == 1) return 0;
		return -1;
	}

	int steps = 0, v = arr[0], mx = 0;
	for (int i = 1; i < n; i++) {
		v--;
		mx = max(arr[i] - v, mx);
		if (!v and mx <= 0) return -1;
		if (!v or i == n - 1) steps++, v = mx, mx = 0;
	}
	return steps;
}

int main() {
	FIO;

	int n;
	cin >> n;
	vector<int> jumps(n);
	FOR(i, 0, n) cin >> jumps[i];

	cout << minJumps(jumps, n);
}
