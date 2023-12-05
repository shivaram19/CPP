#include<iostream>
#include<map> 

using namespace std;

int main() {
  // int n;
  // cin>>n;
  // int arr[n];
  // for( int i = 0; i < n; i++ ){
  //   cin>>arr[i];
  // }
  // int hashed[12] = {0};
  // for(int i = 0; i < n; i++ ){
  //   hashed[arr[i]]+=1;
  // }
  // int q;
  // cin>>q;
  // while(q--){
  //   int number; 
  //   cin>> number;
  //   cout<< hashed[number] <<endl;
  // }
  // string s;
  // cin>>s;
  // int array[256] = {0};
  // for( int i = 0; i < s.size(); i++ ){
  //   array[s[i]]+= 1;
  // }
  // int q;
  // cin>>q;
  // while (q--)
  // {
  //   char c;
  //   cin >> c;
  //   // fetch:
  //   cout << array[c] << endl;
  // }

  // int n ;
  // cin>>n;
  // int arr[n];
  // for( int i = 0; i< n; i++ ){
  //   cin>>arr[i];
  // }
  // // precompute 
  // // first int is the key and second int is the value
  // depending upon the key we can change it from int to double,
  // double to long , long to long long 
  // // the value is mapped to the key 
  // // map stores all the values in the sorted order 
  // map<int, int>mpp;
  // for( int i = 0; i < n; i++ ){
  //   mpp[arr[i]]++;
  // }
  // // looping through the map 
  // // professionally:iterating through the map 
  // for( auto it: mpp ){
  //   cout<<it.first<<"->"<<it.second<<endl;
  // }

  // int q;
  // cin>>q;
  // while(q--){
  //   int number;
  //   cin>>number;
  //   cout<<mpp[number]<<endl;
  // }

  string s;
  cin>>s;
  map<char,int> jang;
  for( int i = 0; i < s.size() ; i++ ){
    jang[s[i]] += 1;
  }

  int q;
  cin>>q;
  while(q--){
    char l;
    cin>>l;

    cout<<jang[l]<<endl;
  }

  return 0;
} 

