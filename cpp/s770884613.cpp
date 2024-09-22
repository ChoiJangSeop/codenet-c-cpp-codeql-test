#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
  double  x,menseki,ensyu;
  double ritu = 3.141592653589;
  cin >> x;
  menseki = x * x * ritu;
  ensyu = 2 * x * ritu;
  printf("%.6f",menseki);
  cout << " ";
  printf("%.6f\n",ensyu);
  return 0;
}