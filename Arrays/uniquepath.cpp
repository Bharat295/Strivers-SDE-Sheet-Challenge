#include <bits/stdc++.h> 
int dp[20][20];
int solve(int i ,int j , int n , int m) {
	if(i == 0 and j == 0) return 1;
	if(i < 0 || j < 0 || i >= n || j >= m) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	return dp[i][j] =  solve(i - 1 , j ,n , m) + solve(i , j - 1 , n , m);
}

int uniquePaths(int m, int n) {
	// Write your code here.
    memset(dp , -1, sizeof(dp));
	return solve(m-1,n-1, m , n);
}