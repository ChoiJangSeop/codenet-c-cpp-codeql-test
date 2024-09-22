typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}



int main() {
    ll n,a[200010],b[200010];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    if(a[n-1] == a[n-2]){
        for (int i = 0; i < n; i++) {
            std::cout << a[n-1] << std::endl;
        }
    }else{
        for (int i = 0; i < n; i++) {
            if(b[i] != a[n-1]){
                std::cout << a[n-1] << std::endl;
            }else{
                std::cout << a[n-2] << std::endl;
            }
        }
    }
}


