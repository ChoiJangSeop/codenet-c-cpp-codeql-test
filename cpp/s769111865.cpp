#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;  
	cin >> n;
  	int hun = n /100;
  	int ten = (n - hun *100)/10;
  	int one = (n - hun * 100)%10;
  	//cout << hun <<ten << one;
  	if(hun == 1){
      hun = 9;
    }
  	else if(hun == 9){
      hun ==1;
    }
  
  	if(ten == 1){
      ten = 9;
    }
  	else if(ten == 9){
      ten =1;
    }
  	
  	if(one == 1){
      one = 9;
    }
  	else if(one == 9){
      one =1;
    }
  cout << hun <<ten <<one;
  	return 0;
}