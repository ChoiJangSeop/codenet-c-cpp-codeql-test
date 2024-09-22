#include<stdio.h>


int main(){
	char a[21];
	char b[21];
	int A;
	int B;
	int i;
	int l=1;
	fgets(a,sizeof(a),stdin);
	fgets(b,sizeof(b),stdin);
	sscanf(a,"%dツ”, &A);
	sscanf(b,"%d", &B);
	i=A+B;
	while(i  >= 10){
		i=i/10;
		l=l+1;
	}
	printf("%d" ,l);
}