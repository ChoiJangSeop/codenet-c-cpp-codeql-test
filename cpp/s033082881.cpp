#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
int main() {
	double w,h,x,y;
	std::cin >> w >> h >> x >> y;
	double a, b ,ans;
	a = std::min(w * y, w * (h - y));
	b = std::min(x * h, (w - x) * h);
	ans = std::max(a, b);
	if (a == b)std::cout << ans << " " << "1" << std::endl;
	else std::cout << ans << " " << "0" << std::endl;
	return 0;
}