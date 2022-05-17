//
// Created by 罗海波 on 5/16/22.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
  string s;
  cout << "请输入一个字符串，可以包含空格: "<< endl;
  getline(cin, s);
  for(auto &c : s) {
    c = 'X';
  }
  cout << s << endl;
  return 0;
}