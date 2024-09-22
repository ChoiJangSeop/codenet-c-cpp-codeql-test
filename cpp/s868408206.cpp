#include <stdio.h>

int main (void){
int W, H , x , y, z=0;
double menseki;
scanf(“%d %d %d %d” , &W ,&H , &x , &y);
menseki = (double)W*H;
if(x == W/2 && y ==H/2)
z=1;
printf(“%.6f %d “ ,menseki, z);

return 0;

}
