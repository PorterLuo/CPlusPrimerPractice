//
// Created by 罗海波 on 5/16/22.
//
#include<iostream>
using namespace std;
unsigned myCnt() {
  static unsigned  i = -1;
  ++i;
  return i;
}
int main(){
  char ch;
  cout << "请输入任意字符后按回车键继续";
  while (cin >> ch) {
    cout << "函数myCnt()的执行次数是: " << myCnt() << endl;
  }
  return 0;
}

