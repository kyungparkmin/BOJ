#include <iostream>
#include <string>
using namespace std;
int main(){
  string str1, str2;
  long long sum=0;
  cin>>str1>>str2;
  for(int i = 0; i < str1.length(); i++){
    for(int j = 0; j < str2.length(); j++){
      sum += (str1[i]-'0') * (str2[j] - '0');
    }
  }
  

  cout<<sum;
}