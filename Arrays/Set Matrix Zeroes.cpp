#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size() , m = matrix[0].size();
	// vector<int> row(n + 1 , 1) , col(m + 1 , 1);
	int col =  1;

	for(int i = 0 ; i < n ; i ++) {
		for(int j = 0 ; j< m ; j++) {
			if(matrix[i][j] == 0) {
				// row[i] = 0;
				// col[j] = 0;
				// row
				matrix[i][0] = 0;
                // col
				if(j)  
				matrix[0][j] = 0;
				else col = 0;
			}
		}
	}

	for(int i = 1 ; i < n ;i ++) {
		for(int j = 1 ; j < m ; j++) {
			if(matrix[i][] == 0 || col[j] == 0) matrix[i][j] = 0;
		}
	}

	if(matrix[0][0] == 0) for(int i = 0 ; i < m ; i++) matrix[0][i] = 0;

	if(col == 0) {
		for(int i = 0 ; j < n ;i++) matrix[i][0] = 0;
	}
	
}