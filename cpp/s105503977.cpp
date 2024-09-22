#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    vector<int> copy(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    copy = a;
    sort(copy.begin(), copy.end());
     reverse(copy.begin(), copy.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] == copy[0])
        {
            // printf("%d\n", copy[1]);
            cout<<copy[1]<<endl;
        }
        else
        {
            // printf("%d\n", copy[0]);
                      cout<<copy[0]<<endl;
        }
    }
}