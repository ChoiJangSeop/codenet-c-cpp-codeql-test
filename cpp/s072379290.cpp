#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;

string S;

int main(void){
    
    cin >> S;
    for(int i = 0; i < S.size(); ++i){
        if(S[i] == '1') printf("9");
        else if(S[i] == '9') printf("1");
        else printf("%c", S[i]);
    }
    printf("\n");
    
    return 0;
}
