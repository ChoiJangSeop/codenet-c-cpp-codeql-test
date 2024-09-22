#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    int Max;
    for(int j = 0; j < N; j++){
        int temp;
        temp = v[j];
        v.erase(v.begin()+ j);
        sort(v.begin(), v.end(),greater<int>());
        cout << v[0] << endl;
        v.insert(v.begin() + j, temp);
    }

}