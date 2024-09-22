#import<cstdio>
int main(){int a,b,s;while(scanf("%d%d",&a,&b)!=EOF){a+=b,s=0;while(a>0,s++,a/=10);printf("%d\n",s);}}