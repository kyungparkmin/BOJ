#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    int a;
    cin>>a;
    if(a == 0){
      if(q.empty()){
        cout<<"0"<<"\n";
      }else{
        cout<<q.top()<<"\n";
        q.pop();
      }
    }else{
      q.push(a);
    }
  }
}