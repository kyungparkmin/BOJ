#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    char c;

    cout<<str[0];
    for(int i=1; i<str.size(); i++){
        c = str[i];
        if(c == '-'){
          cout<<str[i+1];
        }
    }

    return 0;
}