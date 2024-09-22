#include <stdio.h>

int main(void)
{
	int a[200],b[200],sum[200],keta[200],cnt=0;

	for(int i=0;i<3;i++){
		scanf("%d%d",&a[i],&b[i]);

		sum[i]=a[i]+b[i];
		while(sum[i]!=0){
			sum[i]=sum[i]/10;
			cnt++;
		}
		keta[i]=cnt;
		cnt=0;

		printf("%d\n",keta[i]);
	}		

	return 0;
}