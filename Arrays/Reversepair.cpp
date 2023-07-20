#include <bits/stdc++.h> 

int part(vector<int> &arr , int l , int mid , int r) {
	vector<int> v;
	int cnt = 0;
    int i = l , j = mid + 1;
    
    int right = mid + 1;
    for(int left = l ; left <= mid ; left++) {
       
	   while(right <= r and arr[left] > 2ll * arr[right]) 
	       right++;
	   cnt += right - (mid + 1);	 
	}


	while(i <= mid and j <= r) {
		if(arr[i] >= arr[j]) {
			v.push_back(arr[j++]);
            // cnt += (mid - i + 1);
		}
		else v.push_back(arr[i++]);
	}

	while(i <= mid) v.push_back(arr[i++]);
	while(j <= r) v.push_back(arr[j++]);

	for(int k = 0 , i = l ; k < v.size() ; k++ , i++) {
          arr[i] = v[k];
	}
    // cout<<l << ' '<< mid<< ' '<<r << ' '<<cnt<<endl;
	return cnt;
}


int sortt(vector<int> & arr , int l ,int r) {
	int cnt=  0;
	if(l < r) {
		
		int mid = (l+r) / 2;
		cnt += sortt(arr , l , mid);
		cnt += sortt(arr , mid + 1 , r);
        cnt += part(arr , l ,mid , r);
		return cnt;
	}

	else return cnt;
}




int reversePairs(vector<int> &arr, int n){
	// Write your code here.

	return sortt(arr , 0 , n-1);	
}