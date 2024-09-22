#include<bits/stdc++.h>

using namespace std;

main(){
	int a;
	cin>>a;
	int A[a];
	int s=a-1;
	for(int c=0; c<a; c++){
		cin>>A[c];
	}
	while(s >= 0){
		printf("%d",A[s]);
		if (s != 0){
			printf(" ");
		}
		s=s-1;
	}
	printf("\n");
}

