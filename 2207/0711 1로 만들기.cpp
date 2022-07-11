#include <iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, cnt=0;
  cin>>x;

  if(x == 1){
    cnt = 1;
  }

  while(x > 1){
    if(x % 3 == 0){
      x /= 3;
    }else if(x % 2 == 0){
      x /= 2;
    }else{
      --x;
    }
    cnt++;
  }
  cout<<cnt;
}