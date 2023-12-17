#include<iostream>
#include<vector>
using namespace std;

vector<int> duplicate( vector<int> &arr, int n ){
  vector<int> temp;
  for( int i = 1; i < n; i++ ){
    if( arr[i] != arr[i-1] ){
      temp.push_back(arr[i-1]);
    }
  }
  for( int i = 0; i < temp.size(); i++ ){
    arr[i] = temp[i];
  }
  return arr;
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