#include<iostream>
#include<string.h>

using namespace std;

int main(){
  string word;
  cin >> word;
  string def_word="";
  for(int i=0;i<word.length();++i){
  	char c = word[i];
    if(c=='B'){
    	if(def_word.length()>0) def_word.pop_back();
    }
    else{
      def_word+=c;
    }
  }
  cout << def_word << endl;
  return 0;
}