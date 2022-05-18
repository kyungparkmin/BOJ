#include <iostream>
#include <string>
using namespace std;
int main(){
  int num, a=0, b=0;
  string str;
  cin>>num;
  cin>>str;
  for(int i = 0; i < num; i++){
    if(str[i] == 'A'){
      a++;
    }else{
      b++;
    }
  }
  if(a>b){
    cout<<"A"<<endl;
  }else if(a==b){
    cout<<"Tie"<<endl;
  }else{
    cout<<"B"<<endl;
  }
}