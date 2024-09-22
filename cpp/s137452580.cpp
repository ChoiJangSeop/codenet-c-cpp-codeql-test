#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    std::cout <<fixed << setprecision(10)<< (double(w)*double(h)/2) << " ";
    if((x*2==w) && (y*2==h)){
        std::cout << 1 << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }
}