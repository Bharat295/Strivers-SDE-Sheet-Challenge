#include <bits/stdc++.h>

int modularExponentiation(int a, int b, int m) {
	// Write your code here.
	long long ans = 1;
	while(b) {
          if (b & 1) {
            // ans *= a;
			ans = (ans % m * 1ll*a % m) % m;
          }
		//   a *= a;
          a = ((1ll*a % m) * (1ll*a % m)) % m;
	      b = b / 2;
	}
	return ans % m;
}
