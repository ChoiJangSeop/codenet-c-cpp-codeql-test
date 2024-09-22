#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
const int _ = 200005;
int A[_];
int B[_];
int main()
{
   int N;
   cin>>N;
   int fm = 0;
   int sm = 0;
   for(int i = 0 ;i<N;i++)
   {
       cin>>A[i];
       B[i]= A[i];
       if(A[i]>fm)
       {
           fm = A[i];
       }
   }
   sort(B,B+N);
   int f = 0;
   if(B[N-2]==fm)
   {
       f= 1;
   }
   int id = N-1;
   while(B[id]==fm&&id>=0)
   {
       id--;
       if(B[id]!=fm)
       {
           sm = B[id];
           break;
       }
   }
   for(int i = 0 ; i<N;i++)
   {
       if(A[i]<fm){
           cout<<fm<<endl;
       }else
       {
           if(f==1)
           {
               cout<<fm<<endl;
           }else
           {
               cout<<sm<<endl;
           }
           
       }
       
   }
    return 0;
}