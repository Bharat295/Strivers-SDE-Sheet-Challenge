#include <bits/stdc++.h>
void swapi(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	if(arr1[n] > arr2[m]) swap(arr1[n] , arr2[m]);
}

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    swap(n , m);
	int len = n + m;
	int gap = (len + 1) / 2;

	while(gap > 1) {
		int left = 0;
		int right = gap;

		while(right < len) {
			// arr1 and arr2
			if(left < n && right >= n){
				swapi(arr1 , arr2 , left , right - n);
			}
			// arr2 and arr2
			else if(right >= n) {
				swapi(arr2 , arr2 , left - n , right - n);
			}else swapi(arr1 , arr2 , left , right);

			left++;
			right++;
		}
		gap= (gap + 1) / 2;
	}

	 //for(int j = 0 ;j < m ; j++) a.push_back(arr2[j]);
	for(int i = n , j = 0; j < m ; j++ , i++) 
		arr1[i] = arr2[j];


	return arr1;
}