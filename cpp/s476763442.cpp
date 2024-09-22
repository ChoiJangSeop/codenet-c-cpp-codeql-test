#include <bits/stdc++.h>
using namespace std;



int main (){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++)
    cin>>A.at(i);
    int MaxNum=0;
    int NextNum=0;
    for(int i=0; i<N; i++){
        if(MaxNum<A.at(i)+1){
          	NextNum=MaxNum;
            MaxNum=A.at(i);      
        }
      	else{
          NextNum=max(A.at(i), NextNum);
        }
    }
    if(MaxNum>NextNum){
        for(int i=0; i<N; i++){
            if(MaxNum==A.at(i)){
                cout<<NextNum<<endl;
            }
            else{
                cout<<MaxNum<<endl;
            }
        }
    }
    else{
        for(int i=0; i<N; i++){
            cout<<MaxNum<<endl;
        }
    }

}