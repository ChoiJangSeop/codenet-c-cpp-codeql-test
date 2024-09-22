#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(){

  vector<long int> array1(200,0);
  vector<long int> array2(100,0);
  vector<int>      array3(100,1);

  for(int i = 0;i<6;i++){
    cin >> array1[i];
  }

  for(int i = 0; i < 3;i++){
    array2[i] = array1[2*i] + array1[2*i+1];
  }

  for(int i = 0; i < 3;i++){
    while(array2[i] / 10 != 0){

      array3[i]++;
      array2[i] /= 10;

    }
  }

  for(int i = 0; i < 3;i++){
    cout  << array3[i] << endl;
  }


    return 0;
}