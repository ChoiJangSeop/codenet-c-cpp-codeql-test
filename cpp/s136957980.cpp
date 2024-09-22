#include <iostream>

using namespace std;

int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF){
		int c = a+b;
		int cnt = 0;
		do{
			c /= 10;
			++cnt;
		}while(c>0);
		printf("%d\n", cnt);
	}
	return 0;
}