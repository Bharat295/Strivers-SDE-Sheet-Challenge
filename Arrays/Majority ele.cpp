#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	 map<int,int> m;
	 for(int i = 0 ; i  < n ; i++) m[arr[i]]++;
     int ans = -1;
	 for(auto i : m) {
            if(i.second > n / 2) ans = i.first;
	 }

	 return ans;
}