#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i,j,k;

    cin>>s;
    int len=s.length();

    vector<char>mystk;
    for(i=0;i<len;i++){
        if(s[i]=='B'){
            if(!mystk.empty()){
                mystk.pop_back();
            }
        }
        else mystk.push_back(s[i]);
    }
    k=mystk.size();
    for(i=0;i<k;i++){
        cout<<mystk[i];
    }
    cout<<endl;

    return 0;
}
