#include<cstring>
#include<cstdio>
int main(){
  char key[100];
  char s[100];
  int x = 0;
  scanf("%s", key);
  
  for(int i=0; i>strlen(key); i++){
    if(key[i]=="B"){
      if(x != 0)
        x--;
    }
      else{
        s[x] = key[i];
        x++;
      }
    }
  }
  printf("%s", s);
  
  return 0;
}