#include <iostream>
#include <stdio.h>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int HelloWorld(){
	cout << "Hello World" << endl;
	return 0;
}

int XCubic(){
	int x;
	cin >> x;
	if (1 <= x && x <= 100){
		x = x*x*x;
		cout << x << endl;
		return 0;
	}
	return 1;
}

int Rectangle(){
	int a, b, area, perimeter;

	cin >> a >>b;
	if (1 <= a && b <= 100){
		area = a*b;
		perimeter = (a + b) * 2;
		cout << area << " " << perimeter << endl;
		return 0;
	}
	return 1;
}

int Watch(){
	int S;
	cin >> S;
	
	
	int D = 60;
	int s = S%D;
	int m = (S / D) % D;
	int h = (S / D) / D;
	if (0 <= S && S <= 86400){
		printf("%u:%u:%u\n", h, m, s);
		return 0;
	}
	
	return 1;
}

int SmallLargeOrEqual(){
	int a, b;
	cin >> a >> b;
	if (!(a <= a && b <= 1000)) return 1;
	if (a < b)		cout << "a < b" << endl;
	else if (a > b) cout << "a > b" << endl;
	else			cout << "a == b" << endl;
	return 0;
}

int Range(){
	int a, b,c;
	bool flag = true;

	cin >> a >> b >> c;
	if (!(0 <= a && a <= 100)) return 1;
	if (!(0 <= b && b <= 100)) return 1;
	if (!(0 <= c && c <= 100)) return 1;

	if (!(a < b)) flag=false;
	if (!(b < c)) flag = false;

	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

int SortingThreeNumbers(){
	int a, b, c,temp;
	cin >> a >> b >> c;

	if (!(1 <= a && a <= 10000)) return 1;
	if (!(1 <= b && b <= 10000)) return 1;
	if (!(1 <= c && c <= 10000)) return 1;

	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c){
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}

	printf("%u %u %u\n", a, b, c);
	
	
	return 0;
}

int CircleInARectangle(){
	int W, H, x, y, r;
	bool flag = true;
	cin >> W >> H >> x >> y >> r;
	if (!(-100 <= x && x <= 100)) return 1;
	if (!(-100 <= y && y <= 100)) return 1;
	if (!(0 <= W && W <= 100)) return 1;
	if (!(0 <= H && H <= 100)) return 1;
	if (!(0 <= r && r <= 100)) return 1;


	if ((x - r) < 0) flag = false;
	if ((y - r) < 0) flag = false;
	if (W < (x + r)) flag = false;
	if (H < (y + r)) flag = false;

	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

int PrintManyHelloWorld(){
	for (int i = 0; i < 1000; i++){
		HelloWorld();
	}
	return 0;
}

int PrintTestCases(){
	int x,i=1;
	
	while (1){
		cin >> x;
		if (x == 0) break;
		cout << "Case " << i++ << ": " << x << endl;
	}

	return 0;

}

int SwappingTwoNumbers(){
	int x, y, temp;
	
	for (int i = 0;; i++){
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		if (x > y){
			temp = x;
			x = y;
			y = temp;
		}
		cout << x << " " << y << endl;
	}
	return 0;
}


int HowManyDivisors(){
	int a, b, c, count;
	cin >> a >> b >> c;
	count = 0;
	for (a; a <= b; a++){
		if (c%a == 0) count++;
	}
	cout << count << endl;
	return 0;
}

int ADivideBProbrem(){
	int a, b;
	double c;
	cin >> a >> b;
	c = ((double)a / (double)b);
	printf("%u %u %lf\n", a / b, a%b, c);
	return 0;
}

int Circle(){
	double r,area,perimeter;
	cin >> r;
	
	area = r*r*M_PI;
	perimeter = r * 2.0 * M_PI;
	printf("%lf %lf", area, perimeter);
	return 0;
}

int SimpleCalculator(){
	int a, b, z;
	char c;
	
	for (int i = 0;; i++){
		cin >> a >> c >> b;
		if (c == '?') return 1;
		switch (c){
		case '+':
			z = a + b;
			break;
		case '-':
			z = a - b;
			break;
		case '*':
			z = a * b;
			break;
		case '/':
			z = a / b;
			break;
		}
		printf("%d\n", z);
		
	}	
	return 0;
}

int MinMaxAndSum(){
	
	unsigned short int n,i;
	int a, min, max;
	long int sum;
	min = NULL;
	max = NULL;
	sum = 0;
	
	cin >> n;
	
	for (i = 0; i < n; i++){
		cin >> a;
		if (a < min || min == NULL) min = a;
		if (max < a || max == NULL) max = a;
		sum += a;
	}
	cout << min << " " << max << " " << sum << endl;

	return 0;

}

int PrintARectangle(){
	unsigned short int H, W, i,j;
	
	while (1){
		cin >> H >> W;
		if (H == 0 && W == 0) return 1;
		for (i = 0; i < H; i++){
			for (j = 0; j < W; j++){
				cout << '#' << flush;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

int PrintAFrame(){
	unsigned short int H, W, i, j;

	while (1){
		cin >> H >> W;
		if (H == 0 && W == 0) return 1;
		for (i = 0; i < H; i++){
			for (j = 0; j < W; j++){
				if (i ==0 || i == H-1 || j == 0 || j==W-1) cout << '#' << flush;
				else cout << '.' << flush;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

int PrintAChessboard(){
	unsigned short int H, W, i, j;

	while (1){
		cin >> H >> W;
		if (H == 0 && W == 0) return 1;
		for (i = 0; i < H; i++){
			for (j = 0; j < W; j++){
				if ((i % 2) == 0){
					if ((j % 2) == 0) cout << '#' << flush;
					else cout << '.' << flush;
				}
				else {
					if ((j % 2) == 1) cout << '#' << flush;
					else cout << '.' << flush;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

int StructuredProgramming(){
	int n;
	cin >> n;
	int i = 1;
	
	for (i; i <= n; i++){
		int x = i;
		if (x % 3 == 0) cout << " " << i;
		else{
			while (x){
				if (x % 10 == 3){
					cout << " " << i;
					break;
				}
				else{
					x /= 10;
				}
			}
		}
	}
	cout << endl;
	return 0;
}

int ReversingNumbers(){
	unsigned short int n, i;
	cin >> n;
	unsigned int a[100];
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (i = n - 1; i >= 0; i--){
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;

}

int BubleSort(){
	unsigned short int n,i,j,temp;
	cin >> n;
	unsigned int a[100];
	for (i = 0; i < n; i++){
		cin >> a[i];
	}

	for (i = 0; i < n-1; i++){
		for (j = n-1; j > i; j--){
			if (a[j - 1] > a[j]){
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;

}

int main(){
	//HelloWorld();
	//XCubic();
	//Rectangle();
	//Watch();
	//SmallLargeOrEqual();
	//Range();
	//SortingThreeNumbers();
	//CircleInARectangle();
	//PrintManyHelloWorld();
	//PrintTestCases();
	//SwappingTwoNumbers();
	//HowManyDivisors();
	//ADivideBProbrem();
	//Circle();
	//SimpleCalculator();
	//MinMaxAndSum();
	//PrintARectangle();
	//PrintAFrame();
	//PrintAChessboard();
	//StructuredProgramming();
	ReversingNumbers();
	return 0;
}