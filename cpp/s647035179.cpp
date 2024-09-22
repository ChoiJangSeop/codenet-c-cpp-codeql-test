#include <cstdio>
#include <algorithm>
int ret;

int gcd(int x,int y){
    int r;
    if(x < y)
        std::swap(x,y);
    while(y > 0){
        r = x % y;
        x = y;
        y = r;
    }
    ret = x;
    return ret;
}

int main(){
    unsigned int x,y;
    scanf("%d%d",&x,&y);
    gcd(x,y);
    printf("%d\n",ret);

    return 0;
}
