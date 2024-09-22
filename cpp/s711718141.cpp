#include<stdio.h>
using namespace std;

int main(){
    int n = 0;
    	scanf("%d", &n);
	int*a = new int [n];
	for (int i = 0;i < n;i++) {
		a[i] = scanf("%d", &a[i]);
	}

     for (int i = n - 1;i >= 0;i--) {
		printf("%d", a[i]);
		if (i != 0) {
			printf(" ");
		}
     }
	delete[]a;
}
