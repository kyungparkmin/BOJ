#include <iostream>
#include <string>
using namespace std;
int main(){
  int n, num;
  string str;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>num>>str;

    for(int i = 0; i < str.length(); i++){
      if(i != num -1){
        cout<<str[i];
      }
    }
    cout<<"\n";
  }
}