#include<iostream>

using namespace std;

int main(){
	long long W, H, x, y; cin >> W >> H >> x >> y;
	double X, Y;
	if(W-2*x<0&&H-2*y<0){
		X=W-x;
		Y=H-y;

	}else if(W-2*x<0&&H-2*y>=0){
		X=W-x;
		Y=y;

	}else if(W-2*x>=0&&H-2*y<0){
		X=x;
		Y=H-y;

	}else if(W-2*x>=0&&H-2*y>=0){
		X=x;
		Y=y;
	}
	double Xs, Ys;
	Xs = X*H;
	Ys = Y*W;
	cout << (Xs>Ys?Xs:Ys) << " " << (Xs==Ys?1:0) << endl;
}