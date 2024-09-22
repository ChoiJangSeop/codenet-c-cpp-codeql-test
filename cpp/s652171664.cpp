#include<bits/stdc++.h>
const int maxn = 1e1 + 5;
using namespace std;

char a[maxn];


int main(){
	scanf("%s", a + 1);
	int len = strlen(a + 1);
	for(int i = 1; i <= len; i++){
		if(a[i] == 'B'){
			for(int j = i; j >= 1; j--){
				if(a[j] != 'B'){
					a[j] ='B';
					break;
				}
			}
		}
	}
	for(int i = 1; i <= len; i++){
		if(a[i] != 'B') printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}