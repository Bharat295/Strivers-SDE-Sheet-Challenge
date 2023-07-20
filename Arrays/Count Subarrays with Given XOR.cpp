#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int k)
{
    //    Write your code here.
    unordered_map<int , int> m;
    int ans = 0 , x = 0;
    for(auto i : arr) {
        x ^= i;
        if(x == k) ans++;
        if(m.count(x ^ k)) ans += m[x ^ k];

        m[x]++;
    }

    return ans;
}