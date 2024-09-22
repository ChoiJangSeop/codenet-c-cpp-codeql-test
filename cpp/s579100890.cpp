// This code Write By chtholly_micromaker(MicroMaker)
#include <cstdio>
#include <cctype>
#include <algorithm>
#define reg register
using namespace std;
const int MaxN=200001;
template <class t> inline void rd(t &s)
{
	s=0;
	reg char c=getchar();
	while(!isdigit(c))
		c=getchar();
	while(isdigit(c))
		s=(s<<3)+(s<<1)+(c^48),c=getchar();
	return;
}
int a[MaxN],b[MaxN];
signed main(void)
{
	int n;rd(n);
	for(int i=1;i<=n;++i)
		rd(a[i]),b[i]=a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;++i)
	{
		if(b[i]==a[n])
			printf("%d\n",a[n-1]);
		else
			printf("%d\n",a[n]);
	}
	return 0;
}
