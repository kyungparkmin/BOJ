#include <iostream>
#include <stack>
using namespace std;

stack<char>s;
string input;
int n;

int main(){
  cin>>n;
  cin.ignore();
  while(n--){
    getline(cin, input);
    input += ' ';
    for(int i = 0; i < input.length(); i++){
      if(input[i] == ' '){
        while(!s.empty()){
          cout<<s.top();
          s.pop();
        }
        cout<<' ';
      }else{
        s.push(input[i]);
      }
    }
    cout<<"\n";
  }
}