/*  -*- coding: utf-8 -*-
 *
 * c.cc: C - Exception Handling
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
 
using namespace std;

/* constant */

const int MAX_N = 200000;

/* typedef */

/* global variables */

int as[MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  scanf("%d", &n);

  int a0 = 0, a1 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", as + i);
    if (a0 < as[i]) a1 = a0, a0 = as[i];
    else if (a1 < as[i]) a1 = as[i];
  }
  //printf("a0=%d, a1=%d\n", a0, a1);

  for (int i = 0; i < n; i++)
    printf("%d\n", (a0 == as[i]) ? a1 : a0);
  return 0;
}
