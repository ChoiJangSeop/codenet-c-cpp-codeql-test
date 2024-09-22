#include<iostream>

using namespace std;

int main()
{
	size_t ix = 0;
	int a[100],b[100];

	while(cin >> a[ix]){
		if(!(cin >> b[ix]))
			break;
		++ix;
	}

	for(size_t count = 0;count != ix;++count){
		int dight,temp = a[count]+b[count];
		for(a[count]+b[count]>1?1:0,dight = 0;;)
			if(temp/=10)
				++dight;
			else
				break;
		cout <<dight<<endl;
	}

	return 0;
}