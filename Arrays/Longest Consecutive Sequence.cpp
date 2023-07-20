#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
     
     sort(arr.begin() , arr.end());
    int ans = 1;
     int i = 0;
     while(i < n) {
         int cnt = 1;
         int j = i + 1;
         while(j < n && (arr[j] == arr[j-1] || 
         arr[j] == arr[j-1] + 1)) {
             cnt += (arr[j] == arr[j-1] + 1);
             j++;
         }      

         i = j ;
         ans =max(ans , cnt);
     }

     return ans;
}