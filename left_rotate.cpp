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

vector<int> left_rotate_by_d(vector<int> &arr, int n, int d)
{
  if( d > n ) return d = d%2;
  vector<int> temp( d, 0 );
  for( int i = 0; i < d; i++ ){
    cin>>temp.push_back(arr[i]);
  }
  for (int i = 0; i < n - d; i++)
  {
    arr[i] == arr[i+d];
  }
  for( int i = n-d; i < n; i++ ){
    arr[i] = temp[i-(n-d)];
  }
  return arr;
}

int main(){
  int n;
  cin>>n;
  int d;
  cin>>d;
  vector<int> arr(n,0);
  for( int i = 0; i < n; i++ ) cin>>arr[i];
  left_rotate_by_one( arr,n );
  left_rotate_by_d( arr, n , d );
  return 0;
}