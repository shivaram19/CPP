#include<iostream>
#include<vector>

using namespace std;
int slargest(vector<int> &arr, int n){
  int largest = INT_MIN;
  int slarge = INT_MIN;
  for( int i = 0; i < n; i++ ){
    if( arr[i] > largest ){
      slarge = largest;
      largest = arr[i];
    }else if ( arr[i] != largest && arr[i] > slarge ){
      slarge = arr[i];
    }
  }
  return slarge;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for( int i = 0; i < n; i++ ){
    cin>>arr[i];
  }
  slargest(arr, n);
  cout << slargest(arr, n) <<endl; 
  return 0;
}