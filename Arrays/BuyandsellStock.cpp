#include <bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    vector<int> v(n);

    v[n-1] = prices[n-1];
    int ans = 0;
    for(int i = n - 2 ; i >= 0 ; i--) {
        v[i] = max(v[i + 1] , prices[i]);
    }

    for(int i =  0 ; i < n ; i++) {
        ans = max(ans ,v[i] - prices[i]);
    }
    return ans;
}