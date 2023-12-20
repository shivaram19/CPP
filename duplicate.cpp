#include<iostream>
#include<vector>
using namespace std;

vector<int> duplicate( vector<int> &arr, int n ){
  int i = 0;
  for( int j = 1; j < n; j++ ){
    if( arr[j] != arr[i] ){
      arr.push_back(arr[j]);
      i++;
    }
  }
  return arr
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n , 0);
  for( int i = 0 ; i < n; i++ ){
    cin>>arr[i];
  }
  duplicate( arr, n);
  for( int i = 0; i < arr.size(); i++ ){
    cout << arr[i] <<endl;
  }
}