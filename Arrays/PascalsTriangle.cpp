#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>> ans;
  ans.push_back({1});
  for(int i = 1 ; i < n ; i++) {
      vector<long long> temp;
      temp.push_back(1);

      for(int j = 0 ; j < ans[i-1].size() - 1 ; j++) {
        temp.push_back(ans[i-1][j] + ans[i-1][j+1]);
      }
      temp.push_back(1);
      ans.push_back(temp);
  }

  return ans;
}
