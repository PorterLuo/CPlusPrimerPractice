//
// Created by 罗海波 on 5/16/22.
//
#include "Chapter6.h"
using namespace std;
int fact(int val) {
  if(val < 0) {
    return -1;
  }
  int res = 1;
  for(int i = 1; i != val + 1; ++i) {
    res *= i;
  }
  return res;
}