#include <iostream>
using namespace std;
int main(){
  int n, x;
  cin>>x;
  while(true){
    cin>>n;
    if(n == 0){
      break;
    }
    if(n%x==0){
      printf("%d is a multiple of %d.\n", n, x);
    }else{
      printf("%d is NOT a multiple of %d.\n", n, x);
    }
  }
}