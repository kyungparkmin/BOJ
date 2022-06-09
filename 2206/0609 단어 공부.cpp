#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int num[26] = {0,}; 
	int max = -1;
	int idx = -1;

	for (int i = 0; i < str.length(); i++){
		if(str[i]<97){
			num[str[i] - 65]++; 
    }else{
      num[str[i] - 97]++; 
    }	
  }

	for (int i = 0; i < 26; i++){
		if (max < num[i]){
			max = num[i];
			idx = i;
		}
	}

	for (int i = 0; i < 26; i++){
		if (idx == i)
			continue;
		if (max == num[i]){
			cout << '?';
			return 0;
		}
	}
	
	cout << (char)(idx+65);
	return 0;
}