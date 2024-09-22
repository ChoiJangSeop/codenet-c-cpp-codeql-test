#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int digit(int num){
	if((num / 10) > 0){
		return (digit(num/10))+1;
	}
	else return 1;
}

int main(){
	int num1,num2,result=0;
	char buf[32];
	while(1){
		if(scanf("%d %d",&num1,&num2) == 0)break;
		result = 0;
		result += digit(num1);
		result += digit(num2);
		cout << result << endl;
		break;
	}
	return 0;
}