#include<iostream>

using namespace std;
vector<int> move_zeroes( vector<int> &arr, int n ){
  int index;
  for( int i = 0; i < n; i++ ){
    if( arr[i] == 0 ){
      arr[i] == arr[i + 1];
      arr[i+1] == 0;
      index++;
    }
  }
}

vector<int> move_zeroes_striver( vector<int> &arr, int n ){
  
}
int main(){
  int n;
  cin>>n;
  vector<int> arr( n,0 );
  for( int i = 0; i < n; i++ ) cin>>arr[i];
  move_zeroes(arr, n);
  return 0;
}