#include <stdio.h>

using namespace std;


int main(){
	int a,b,count,s;

	while(scanf("%d %d",&a,&b)!=EOF){
		count=0;
		s=a+b;
		while(s!=0){
			s/=10;
			count++;
		}
		printf("%d\n",count);
	}

    return 0;
}
