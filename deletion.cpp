#include<iostream>

using namespace std;

vector<int> deletion(vector<int> &arr, int n, int x){
  //if( i==n ) return arr;
  int i;
  for( i = 0; i < n; i++ ){
    if( arr[i] == x ) break;
  }
  for( int j = i; j < n; j++ ){
    arr[j] = arr[j+1];
  }
  
  return arr;
}
int main(){
  int n ;
  cin>>n;
  vector<int> arr(n,-1);
  for( int i = 0; i < n; i++ ){
    cin>>arr[i];
  }
  deletion(arr, 5, 6);
  for( int i = 0; i < n-1; i++ ){
    cout<< arr[i] <<endl;
  }
  return 0;
}