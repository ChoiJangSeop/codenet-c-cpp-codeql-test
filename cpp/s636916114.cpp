#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define HUGE_NUM 1000000000000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;


#define SIZE 200005

int N;
int A[SIZE];


int main(){

	scanf("%d",&N);

	int maximum = -1,second = -1,num_max = 0;

	for(int i = 0; i < N; i++){

		scanf("%d",&A[i]);
		if(A[i] > maximum){
			second = maximum;
			maximum = A[i];
			num_max = 1;
		}else if(A[i] == maximum){

			num_max++;
		}else if(A[i] > second){

			second = A[i];
		}
	}

	for(int i = 0; i < N; i++){

		if(A[i] != maximum){

			printf("%d\n",maximum);

		}else{ //A[i] == maximum

			if(num_max > 1){

				printf("%d\n",maximum);
			}else{

				printf("%d\n",second);
			}
		}
	}

	return 0;
}
