#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m, arr[100001];
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  cin>>m;
  sort(arr, arr+n);
  for(int i = 0; i < m; i++){
    int x;
    cin>>x;
    if(binary_search(arr, arr+n, x)){
      cout<<"1"<<"\n";
    }else{
      cout<<"0"<<"\n";
    }
  }
}