#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,l = str.length();
    for(i=0;i<l;i++)
    {
        if(str[i] == 'B'&&i == 0)
        {
            for(j=1;j<l;j++)
                str[j-1] = str[j];
            l--;
            i--;
        }
        if(str[i]=='B'&&i > 0)
        {
            for(j=i+1;j<l;j++)
                str[j-2] =str[j];
            l -= 2;
            i -= 2;
        }
    }
    cout<<str.substr(0,l)<<endl;
    system("pause");
    return 0;

}