#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	if( x<y ){
		swap(x,y);
	}
	//cout << x <<" "<<y<<endl;
	for( int i=x/2 ; i>=1 ; i-- ){
		if( x%i+y%i==0 ){
			cout << i << endl;
			break;
		}
	}
	return 0;
}