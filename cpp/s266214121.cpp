#include<iostream>
using namespace std;

int main(){
    char str[256];
    char ans[256] = {'\0'};
    int i = 0;
    int index = 0;

    cin >> str;

    while(str[i] != '\0'){
        if(str[i] == '0'){
            ans[index] = '0';
            index++;
        }
        else if(str[i] == '1'){
            ans[index] = '1';
            index++;
        }
        else{
            if(index != 0){
                ans[index] = '\0';
                index--;
            }
        }
        i++;
    }

    cout << ans << '\n';

    return 0;
}