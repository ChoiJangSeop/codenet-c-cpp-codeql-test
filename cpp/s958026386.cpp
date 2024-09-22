#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int max1_index = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[max1_index] < A[i])
        {
            max1_index = i;
        }
    }

    int max2_index = -1;
    for(int i = 0; i < A.size(); i++)
    {
        if(max1_index == i)
        {
            continue;
        }

        if(max2_index == -1)
        {
            max2_index = i;
        }

        else if(A[max2_index] < A[i])
        {
            max2_index = i;
        }
    }

    for(int i = 0; i < A.size(); i++)
    {
        if(i == max1_index)
        {
            cout << A[max2_index] << endl;
        }

        else
        {
            cout << A[max1_index] << endl;
        }
    }

    return 0;
}