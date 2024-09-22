#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int w,h,x,y;
    scanf("%d%d%d%d", &w,&h,&x,&y);

    bool able=false;
    if(w>>1==x && h>>1==y) able=true;     
    printf("%.9lf %d\n",(double)w*(double)h/2, able);
}