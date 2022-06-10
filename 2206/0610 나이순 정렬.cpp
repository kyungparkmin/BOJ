#include <iostream>
#include <algorithm>
using namespace std;
typedef struct Member{
  int age;
  string name;
}member;

member m[100001];

bool comp(member m1,member m2) {
	return m1.age < m2.age;
}
int main(){
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>m[i].age>>m[i].name;
  }
  stable_sort(m, m+n, comp);
  for(int i = 0; i < n; i++){
    cout<<m[i].age<<" "<<m[i].name<<"\n";
  }
}