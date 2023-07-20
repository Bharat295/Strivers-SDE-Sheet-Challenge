int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0 , cnt = 0;
	while(i < n) {
		int j = i+ 1;
		while(j < n and arr[j] == arr[i]) j++;
		i = j;
		cnt++;
	}

	return cnt;
}