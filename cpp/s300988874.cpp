#include <bits/stdc++.h>
 
 using namespace std;
 
 __int64 gcd(__int64 a,__int64 b)
 {
 	if(0==b) return a;
 	return gcd(b, a%b);
 }
 
 int main()
 {
 	__int64 a, b;
 	scanf("%I64d %I64d", &a, &b);
 	printf("%I64d\n", gcd(a,b));
 	return 0;
 }