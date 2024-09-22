///***Bismillahir Rahmanir Rahim***///

///*********************************///
///******Ashraful Haque Toni********///
///********Dept. of CSE,JnU*********///
///email:ashrafulhaquetoni@gmail.com///
///*******contact:01640690531*******///
///*********************************///


#include<bits/stdc++.h>

using namespace std;

#define         ash ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define         pb push_back
#define         mp make_pair
#define         sc(n) scanf("%d",&n);
#define         scl(n) scanf("%I64d",&n);
#define         sc2(m,n) scanf("%d%d",&m,&n);
#define         sc2l(m,n) scanf("%I64d%I64d",&m,&n);
#define         pf printf
#define         Big(x,y) max(x,y);
#define         Small(x,y) min(x,y);
#define         input(array,size) for(int i=0;i<size;i++)cin>>array[i];
#define         newline pf("\n");
#define         f(s,l,in) for(ll i=s;i<l;i+=in)
#define         Max INT_MAX
#define         Min INT_MIN
#define         pi acos(-1.0)
#define         Memset(a,val) memset(a,val,sizeof(a));

const int mod =1e9+7;
const int N =5e6+5;
typedef long long ll;



int main()
{

    //ash;
    double a,b,x,y;
    cin>>a>>b>>x>>y;
    double res,area,are1,are2;
    area=a*b;
    //cout<<area;
    if(a!=x)are1=(a-x)*b;
    else are1=a*b;
    //cout<<are1;
    if(b!=y)are2=(b-y)*a;
    else are2=b*a;
    //cout<<are2;

     if(are1==are2)
     {
         pf("%0.6f 1\n",are1);
     }
     else
     {
         pf("%0.6f 0\n",max(are1,are2));
     }





    return 0;
}


