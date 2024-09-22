#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
stack <int> q;
int main()
{
    char str[12];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='0')
            q.push(0);
        else if(str[i]=='1')
            q.push(1);
        else
        {
            if(!q.empty())
                {
                    int x=q.top();
                    q.pop();
                    //cout<<q.top();
                }
        }
    }
   while(!q.empty())
   {
       if(q.size()>0)
       cout<<q.top();
       else cout<<q.top()<<endl;
       q.pop();
   }
}
