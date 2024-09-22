#include <cstdio>
#include <cstdlib>
using namespace std;

int digit(int num){
	if((num / 10) > 0 ) return (digit(num/10))+1;
	else return 1;
}

int main(){
	int num1,num2,result=0;
	while(fscanf(stdin,"%d %d",&num1,&num2) != EOF){
		result = digit(num1+num2);
		printf("%d\n",result);
	}
	return 0;
}