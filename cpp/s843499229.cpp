#include<stdio.h>

int main()
{
				int in[1000];
				int num;
				int i=0;

				scanf("%d",&num);
				while(i++<num){
								scanf("%d",&in[i]);
				}

				for(;num>0;num--){
								printf("%d ",in[num]);
				}
				printf("\n");


				return 0;

}
