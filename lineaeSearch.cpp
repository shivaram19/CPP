#include<iostream>

using namespace std;
int linearSearch( vector<int> &arr, int n , int num ){
  int index = -1;
  for( int i = 0; i < n; i++ ){
    if( arr[i] == num ){
      index = i;
    }
  }
  return index;
}

int main(){
  vector<int> arr(n,0);
  for( int i = 0; i < n; i++ ){
    cin>>arr[i];
  }
  linearSearch(arr,n,4)
  return 0;
}