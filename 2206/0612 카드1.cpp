#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<int> q;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin>>n;

  for(int i = 1; i <= n; i++){
    q.push(i);
  }

  while(q.size() > 0){
    cout<<q.front()<<" ";
    q.pop();
    q.push(q.front());
    q.pop();
  }
}