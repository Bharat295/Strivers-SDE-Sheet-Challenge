#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.

   sort(arr.begin() ,arr.end());
   vector<vector<int>> ans;
   int n = arr.size();
   int i = 0 , j = n - 1;
   while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == s) {
             int x = arr[i] , y = arr[j];
            //  while(i < j and arr[i] == x) i++;
            int k = j;
             while(k > i and arr[k] == y)  
                   ans.push_back({x , arr[k--]}); 
            i++;
            
         
        }
        else if(sum>s) {
             j--;
        }else{
             i++;
        }


   }
   return ans;
}