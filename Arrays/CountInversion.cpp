#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll merge(ll*arr , int l , int mid , int r) {
    // Here I will be merging my arrays
    vector<int> v;
    ll cnt = 0;
    int i = l , j = mid+1;
    while(i <= mid and j <= r) {
        if(arr[i] > arr[j]) {
             cnt += (mid - i + 1);
             v.push_back(arr[j++]);
        }

        else {
            v.push_back(arr[i++]);
        }
    }

    while(i <= mid) v.push_back(arr[i++]);
    while(j <= r) v.push_back(arr[j++]);

    for(int k = 0,x = l; k < v.size() ; k++ , x++) {
       arr[x] = v[k];
    }

    // cout<<l << ' '<<mid<<' '<<r<< ' '<<cnt<<endl;

    return cnt;
 
} 


ll sortt(ll *arr , int l ,int r) {
    ll cnt = 0;
    if(l < r) {
        int mid = (l + r)/2;
        cnt += sortt(arr , l , mid);
        cnt += sortt(arr ,mid+1 , r);
        cnt += merge(arr , l ,mid , r);
        return cnt;
    }else return cnt;
}



long long getInversions(long long *arr, int n){
    // Write your code here.

    return sortt(arr , 0 , n -1);
}