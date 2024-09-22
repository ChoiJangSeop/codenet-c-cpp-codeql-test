#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  double w, h, x, y;
  cin >> w >> h >> x >> y;
  
  vector<double> ws;
  ws.push_back((h-y) * w);
  ws.push_back(y * w);
  
  vector<double> hs;
  hs.push_back(h * (w-x));
  hs.push_back(h * x);

  vector<double> ds;
  if (x > 0 && y > 0) {
    double dx = h / (y / x);
    double dy = w * (y / x);
    if (fabs(w-dx) < DBL_EPSILON || dx < w) {
      ds.push_back((dx * h) / 2);
      ds.push_back((w * h) - ds[0]);
    } else {
      ds.push_back((w * dy) / 2);
      ds.push_back((w * h) - ds[0]);
    }
  }
  sort(ws.begin(), ws.end(), greater<double>());
  sort(hs.begin(), hs.end(), greater<double>());

  vector<double> tmp;
  tmp.push_back(ws[1]);
  tmp.push_back(hs[1]);
  if (!ds.empty()) {
    sort(ds.begin(), ds.end(), greater<double>());
    tmp.push_back(ds[1]);
  }
  sort(tmp.begin(), tmp.end(), greater<double>());

  cout << tmp[0] << endl; 

  bool b = false;
  for (int i = 0; i < tmp.size(); ++i) {
    for (int j = 0; j < tmp.size(); ++j) {
      if (i == j) continue;

      if (fabs(tmp[i] - tmp[j]) < DBL_EPSILON) {
        b = true;
        break;
      }
    }
  }

  if (b) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}