#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int i;
        int len=s.size();
        for(i=0;i<len;i++)
        {
            if(s[i]=='B')
            {
                if(i>0)
                {
                    s[i-1]='B';
                }
            }
        }
        for(i=0;i<len;i++)
        {
            if(s[i]!='B')
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
