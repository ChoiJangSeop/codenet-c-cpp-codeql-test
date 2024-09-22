#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int digit(int num){
	if((num / 10) > 0 ) return (digit(num/10))+1;
	else return 1;
}

int main(){
	int num1,num2,result=0;
	char buf[32];
	while(fscanf(stdin,"%d %d",&num1,&num2) != EOF){
		result = digit(num1+num2);
		cout << result << endl;
	}
	return 0;
}