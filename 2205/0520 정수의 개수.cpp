#include <iostream>
#include <string>
using namespace std;
int main(){
  int cnt=0;
  string str;

  cin>>str;

  for(int i = 0; i < 101; i++){
    if(str[i] == ','){
      cnt++;
    }
  }
  cout<<cnt+1;
}