#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int N, m = 0, x = 0;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        if(A.at(i) > m) 
        {
            x = m;
            m = A.at(i);
        }
    }
    if(x < A.at(N-1)) x = A.at(N-1);
    for(int i = 0; i < N; i++)
    {
        if(A.at(i) < m) cout << m <<endl;
        else cout << x << endl;
    }
    return 0;
}