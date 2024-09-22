    #include <iostream>
    #include <iomanip>
    #include <math.h>
    using namespace std;
    double r;
    int main(){
      cin>>r;
      cout<<fixed<<setprecision(8)<<r*r*M_PI<<" "<<2*r*M_PI<<endl;   
    }