#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a1[200],b[200],f,i=0,a,g,k=0;
	while(cin>>f){
		scanf("%d %d",&a1[i],&b[i]);
		i++;
	}
	for(int j=0;j<i;j++){
		a=a1[j]+b[j];
		for(g=0;;g++){
			if(a==0&&g==0){
				printf("0\n");
				break;
			}
			a=a/10;
			k++;
			if(a==0){
				printf("%d\n",k);
				break;
			}
		}
		k=0;
	}
	return 0;
}