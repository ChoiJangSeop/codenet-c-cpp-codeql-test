#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define go ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mem(arr,v) memset(arr,v,sizeof(arr))
/*bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
} */
ll arr[2000005],arr2[2000005];
int main()
{
     ll t,mx=INT_MIN,cnt=1;;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         cin>>arr[i];
         arr2[i]=arr[i];
         if(arr[i]>mx)
         {
             cnt=1;
             mx=arr[i];
         }
         else if(arr[i]==mx)
         {
             cnt++;
         }
     }
     sort(arr2,arr2+t);
     if(cnt>1)
     {
         for(int i=0;i<t;i++)
         {
             cout<<mx<<endl;
         }
     }
     else
     {
         //cout<<"deb"<<endl;
         for(int i=0;i<t;i++)
         {
             if(arr[i]==mx)
                cout<<arr2[t-2]<<endl;
             else
             cout<<mx<<endl;
         }
     }
}
