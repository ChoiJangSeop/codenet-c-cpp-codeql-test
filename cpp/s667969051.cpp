#include <cstdio>

int main(){
	int N;
	int A[200];
	scanf("%d\n", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	for(int i=N-1; i>=0; i=i-1){
			printf("%d ", A[i]);
		}
	return 0;
}