#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int arr[n];
	int maxi = 0;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	    maxi = max(maxi, arr[i]);
	}
	int many = 0;
	for (int i = 0; i < n; i++) {
	    if (arr[i] == maxi) many++;
	}
	if (many > 1) {
	    for (int i = 0; i < n; i++) {
	        cout << maxi;
	        if (i != n - 1) cout << endl;
	    }
	}
	else {
	    int nextmax = -1;
	    for (int i = 0; i < n; i++) {
	        if (arr[i] != maxi) nextmax = max(nextmax, arr[i]);
	    }
	    for (int i = 0; i < n; i++) {
	        if (arr[i] == maxi) cout << nextmax;
	        else cout << maxi;
	        if (i != n - 1) cout << endl;
	    }
	}
}