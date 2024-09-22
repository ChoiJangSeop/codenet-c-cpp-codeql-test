#include<iostream>
using namespace std;
int keisan(int x,int y){
	int r;
 if (x < y)
        swap(x, y);
    while (y > 0){
        r = x % y;
        x = y;
		y = r;
	}
    return x;
}

int main(){
  int a;
  int b;
  cin >> a >> b;
  cout<<keisan(a,b)<<endl;
  return 0;
 }
