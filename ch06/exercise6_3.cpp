//
// Created by 罗海波 on 5/16/22.
//
#include<iostream>
using namespace std;
int fact(int val) {
  if(val < 0) {
    return -1;
  }
  int ret = 1;
  for(int i = 1; i <= val; ++i) {
    ret *= i;
  }
  return ret;
}
int main(){
  int val = 3;
  int res = fact(3);
  cout << res << endl;
  return 0;
}