#include <iostream>
#include <string>
using namespace std;
int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string str;
  int cnt = 0;
  cin>>str;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
      cnt+=3;
    }else if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F'){
      cnt+=4;
    }else if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I'){
      cnt+=5;
    }else if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L'){
      cnt+=6;
    }else if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O'){
      cnt+=7;
    }else if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S'){
      cnt+=8;
    }else if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V'){
      cnt+=9;
    }else if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'){
      cnt+=10;
    }
  }
  cout<<cnt;
}