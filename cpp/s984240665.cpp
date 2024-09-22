#include<stdio.h>
int main()
{
          long int i,j,k,A[10000];
          scanf("%d",&k);
          for(i=0;i<k;i++)
          {
                    scanf("%d",&A[i]);
          }
          for(i=k-1;i>0;i--)
          {
                    printf("%d ",A[i]);
          }
          printf("%d",A[0]);
          printf("\n");
          return 0;
}

