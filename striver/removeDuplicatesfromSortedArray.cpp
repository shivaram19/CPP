#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getElements( vector<int> &nums){
  vector<int> temp;
  int i = 0;
  int j = i+1;
  while( i < nums.size() && j < nums.size() ){
    if( nums[i] == nums[j] ) j++;
    else{
      i++;
      nums.push_back(nums[j]);
      j++;
    }
  }
  return i+1;
}

int main()
{
  int n ;
  cin>>n;
  vector<int> nums(n, 0);
  for( int i =0; i < n; i++ ){
    cin>>nums[i];
  }
  cout<< getElements(nums) << " ";  

}