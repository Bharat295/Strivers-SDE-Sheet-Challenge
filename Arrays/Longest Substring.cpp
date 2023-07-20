#include <bits/stdc++.h> 

bool oky(int*arr) {
    for(int i = 0 ;i < 28 ;i++) if(arr[i] > 1) return 0;
    return 1;
}

int uniqueSubstrings(string input)
{
    //Write your code here
    int i = 0 , j = 0 , ans = 0 , n = input.size();
    int arr[30] = {0};

    while(j < n){
        arr[input[j] - 'a'] ++;
        while(i < n and oky(arr) == 0) {
            arr[input[i++] - 'a']--;
        }
        ans = max(ans , j - i + 1);
        j++;
    }

    return ans;
}