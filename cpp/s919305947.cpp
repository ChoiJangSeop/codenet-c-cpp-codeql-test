#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
#define Inf 1 << 20
#define MInf -(1 << 20)
 
#define rep(i,n) for(int i = 0;i < (int)(n);i++)
#define Rep(i,n,m) for(int i = (int)(n); i < (int)(m);i++)
#define rrep(i,n) for(int i = (int)(n - 1); i > -1;i--)
#define RRep(i,n,m) for(int i = (int)(n - 1); i > (int)(m);i--)
#define trav(a, x) for(auto& a : x)
 
#define ALL(V) (V).begin(),(V).end()
#define SORT(V) sort(ALL(V))
#define REVERSE(V) reverse(ALL(V))
#define RSORT(V) SORT(V);REVERSE(V)
 
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define yes(n) cout << ((n) ? "yes" : "no") << endl;


int main()
{
   int N;
   cin >> N;
   vector<int> list(N);
   vector<int> list2(N);
   vector<int> list3(N);
   int max = 0;
   rep(i,N)
   {
       cin >> list.at(i);
       if(max < list.at(i))
       {
           max = list.at(i);
       }
   }
   list3 = list;
   RSORT(list);
   rep(i,N)
   {
       if(list[i] == max)
       {
           list.erase(list.begin());
       }
       else
       {
           break;
       }
   }
    int second = list[0];
    rep(i,N)
    {
        if(max == list3[i])
        {
            cout << second << endl;
        }
        else
        {
            cout << max << endl;
        }
    }

}
