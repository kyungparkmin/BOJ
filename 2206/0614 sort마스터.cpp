#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n, a, c=0;
  cin>>n;
  while(n--){
    cin>>a;
    if(c<a) c= a;
  }
  cout<<c<<endl;
}