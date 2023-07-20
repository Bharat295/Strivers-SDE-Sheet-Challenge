#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.

 map<int,int> m;
 vector<int> ans;
 int n = arr.size();
	 for(int i = 0 ; i  < n ; i++) m[arr[i]]++;
   
	 for(auto i : m) {
            if(i.second > n / 3) ans.push_back(i.first);
	 }

	 return ans;
}