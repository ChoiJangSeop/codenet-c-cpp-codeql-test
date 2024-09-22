#include <bits/stdc++.h>

using namespace std;
int main() {
  int N;
  cin >> N;
  int nums[N]; 
  priority_queue<int> lis; 
  int count[200005]; 
  memset(count,0,sizeof(count));   
  for(int i = 0; i < N; i++){
    cin >> nums[i]; 
    lis.push(nums[i]); 
    count[nums[i]]++; 
  }
  int temp; 
  for(int i = 0; i < N; i++){
    if (nums[i] != lis.top()){
      cout << lis.top(); 
    } else {
      if (count[lis.top()] > 1){
        cout << lis.top(); 
      } else {
        temp = lis.top(); 
        lis.pop();
        cout << lis.top();
        lis.push(temp); 
      }
    }
    cout << endl; 
  }
    
}
