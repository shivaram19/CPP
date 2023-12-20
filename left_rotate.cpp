#include<iostream>

using namespace std;

vector<int> left_rotate_by_one( vector<int> &arr, int n ){
  int temp = arr[0];
  for( int i = 0; i < n-1; i++ ){
    arr[i] == arr[i+1];
  }
  arr[n-1] = temp;
  return arr;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for( int i = 0; i < n; i++ ) cin>>arr[i];
  left_rotate_by_one( arr,n );
  return 0;
}