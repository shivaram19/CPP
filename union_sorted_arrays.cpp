#include<iostream>

using namespace std;
vector<int> union( vector<int> &arr1, vector<int> &arrtwo ){
  vector<int> temp;
  int i,j=0;
  while( i < n1 && j < n2){
    if( arr1[i] <= arr2[j] ){
      temp.push_back(arr1[i]);
      i++;
    }else{
      temp.push_back(arr2[j]);
      j++;
    }
  }
}

int main(){
  
  return 0;
}