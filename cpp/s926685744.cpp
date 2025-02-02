#include <cstdio>

#define max(a, b) (a > b ? a : b)

int main() 
{
	const int MAX_N = 20;
	char operations[MAX_N];
	scanf("%s", operations);
	
	char answer[MAX_N];
	int end = 0;
	for(int i = 0; operations[i] != '\0'; i++)
	{
		if(operations[i] == 'B')
			end = max(0, end - 1);
		else
			answer[end++] = operations[i];
	}
	
	for(int i = 0; i < end; i++)
		printf("%c", answer[i]);
		
	return 0;
}