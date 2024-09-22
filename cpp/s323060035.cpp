#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> seq(n);
    for(int i=0; i<n; i++){
        cin >> seq[i];
    }
    for(int i=seq.size()-1; i>0; i--){
        cout << seq[i] << " ";
    }
    cout << seq[0] << endl;
    return 0;
}

