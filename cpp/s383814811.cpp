#include <iostream>
#include <cmath>

using namespace std;

int main() {
 const double pi = acos(-1);

 double r;

 cin >> r;

 double area = pi * r * r;
 double len = 2 * pi * r;

 cout << area << " " << len << endl;

 return 0;
}