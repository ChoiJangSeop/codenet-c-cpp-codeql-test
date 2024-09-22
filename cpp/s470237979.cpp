#include <stdio.h>
 #include<string.h>
int main()
{
   int i;
  char k[100];
  scanf("%s",k);
  for(i=0;i<strlen(k);i++)
  {
      printf("%c",(k[i]=='9')?'1':'9');
  }
 
    return 0;
}