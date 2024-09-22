#include<stdio.h>
#include<vector>
int n;
std::vector<int> data;
void proc(){
  auto begin=data.rbegin();
  for(auto it=data.rend();it!=begin;){
    printf("%d",*it);
    if(++it!=begin)printf(" ");
  }
  printf("\n");
}

void input(){
  int x;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&x);
    data.push_back(x);
  }
}

int main(){
  input();
  proc();
}