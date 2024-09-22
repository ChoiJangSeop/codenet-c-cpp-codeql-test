#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int i, n, w, h, x, y, flagx, flagy, maior;
	scanf("%d%d%d%d", &w, &h, &x, &y);
	int areag = w * h;
	int areax = x * h;
	int areay = w * y;
	flagx = flagy = maior = 0;
	if (areax == areag - areax){
		flagx = 1;
		if (areag - areax > maior){
			maior = areag - areax;
		}
	}
	if (areay == areag - areay){
		flagy = 1;
		if (areag - areay > maior){
			maior = areag - areay;
		}
	}
	if (flagy == 1 and flagx == 1){
		printf("%.6f 1\n", double(maior));
	}else{
		printf("%.6f 0\n", double(maior));
	}
	return 0;
}