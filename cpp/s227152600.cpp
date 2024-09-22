#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;


signed main(){
    double r;

    std::cin >> r;

    double rate = 3.141592653589;

    cout.precision(6);
    std::cout << fixed << r * r * rate << " " << fixed << r * 2 * rate << std::endl;

    return 0;
}
