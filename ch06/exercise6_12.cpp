//
// Created by 罗海波 on 5/17/22.
//
#include<iostream>
using namespace std;
void mySWAP(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
int main(){
  int a = 5, b = 10;
  cout << "交换前: a = " << a << ", b = " << b <<  endl;
  mySWAP(a, b);
  cout << "交换后: a = " << a << ", b = " << b <<  endl;
  return 0;
}
