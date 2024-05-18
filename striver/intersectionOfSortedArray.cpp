#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> getIntersectionOfSortedArrays(vector<int> &arr1, vector<int> &arr2){
  int n1 = arr1.size();
  int n2 = arr2.size();
  int i,j;
  vector<int> temp;

  while( i < n1 && j < n2 ){
    if( arr1[i] == arr2[j] ){
      temp.push_back(arr1[i]);
      i++;
      j++;
    }else if( arr1[i] < arr2[j] ){
      i++;
    }else j++;
  }
}

int main(){

  return 0;
}