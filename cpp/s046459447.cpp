#include <stdio.h>
#include <math.h>

int main() {
	int a[3],b[3];
	int ans[3];
	for(int i=0; i<1; i++) scanf("%d %d", &a[i], &b[i]);

	int cnt;
	int keta[3] = {0,0,0};
	for(int i=0; i<1; i++) {
		cnt = a[i] + b[i];
		while(cnt >= 10) {
			cnt/=10;
			keta[i] ++;
		}
		keta[i]++;
	}

	printf("%d\n", keta[0]);

	return 0;
}
