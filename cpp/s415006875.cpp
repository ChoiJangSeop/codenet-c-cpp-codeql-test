#include <cstdio>  
#include <algorithm>
using namespace std;  
int main() { 	
	int a,b,c;
	int d;
	scanf("%d%d%d", &a, &b, &c);
	if(a==9){
		a=1;
	}
	if(a==1){
		a=9;
	}
	if(b==9){
		b=1;
	}
	if(b==1){
		b=9;
	}
	if(c==1){
		c=9
	}
	if(c==9){
		c=1;
	}
	printf("%d%d%d", a , b, c);

	
	
}




