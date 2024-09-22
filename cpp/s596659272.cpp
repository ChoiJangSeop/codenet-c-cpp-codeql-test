#include<iostream>
using namespace std;

int main() {
	int num_of_nums = 0;
	cin >> num_of_nums;
    int* nums = new int[num_of_nums];
    for (int i = 0; i < num_of_nums; i++) {
 	   cin >> nums[i];
    }
    for (int i = 0; i < num_of_nums; i++) {
 	   cout << nums[num_of_nums-1 - i] << ' ';
    }
	cout <<'\n';
    return 0;
}