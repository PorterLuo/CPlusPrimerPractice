//
// Created by 罗海波 on 5/16/22.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
  string word;
  cout << "请输入您的单词，不可以包含空格: "<< endl;
  while(cin >> word) {
    cout << word << endl;
  }
  return 0;
}