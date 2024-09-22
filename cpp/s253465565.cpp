#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    double ans, ans1, ans2, ansn1=1e10, ansn2=1e10, tmp_ans, tmp_ans1, tmp_ans2, ans3;

//    if (W < H) {
//        swap(W, H);
//        swap(x, y);
//    }

//    if (x > W / 2 && y > H / 2) {
//        x = W - x;
//        y = H - y;
//    } else if (x > W / 2) {
//        x = W - x;
//    } else if (y > H / 2) {
//        y = H - y;
//    } else {
//        ;
//    }

    // 縦に分割した時
    ans1 = min(x*H, (W-x)*H);
    // 横に分割した時
    ans2 = min(W*y, W*(H-y));

    // 斜めに分割した時
//    double Y = (W / 2 * (H / 2 - y)) / (W / 2 - x);
//    double a = H / 2 - Y;
    ans = W * H / 2.0;
    int flag;
//    if (ans1 == ans && ans2 == ans) {
//        flag = 1;
//    }else if (ans1 == ans || ans2 == ans) {
//        flag = 0;
//    } else {
//        flag = 1;
//    }
    if (x == W / 2 && y == H / 2 && W == H) {
        flag = 1;
    } else if (x == W / 2 || y == H / 2) {
        flag = 0;
    } else {
        flag = 1;
    }
//    cout << ans1 << endl;
//    cout << ans2 << endl;
    cout << ans << " " << flag << endl;
    return 0;
}