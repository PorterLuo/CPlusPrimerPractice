//
// Created by 罗海波 on 5/16/22.
//
#include<iostream>
using namespace std;
double myAdd(double val1, double val2) {
  double res = val1 + val2;
  static unsigned  i = 0;
  ++i;
  cout << "改函数已经累计执行了" << i << "次" << endl;
  return res;
}
int main(){
  double num1, num2;
  cout << "请输入两个数：";
  while (cin >> num1 >> num2) {
    cout << num1 << "与" << num2 << "的求和结果是: " << myAdd(num1, num2) << endl;
  }
  return 0;
}
