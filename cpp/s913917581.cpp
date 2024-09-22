#include <stdio.h>
int fuego(int val) {int ans=0;while (val) ans++,val/=10;return ans;}
int main() {int a,b;while (scanf("%d %d",&a,&b)!=EOF) printf("%d\n",fuego(a+b));return 0;}