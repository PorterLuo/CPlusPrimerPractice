//
// Created by 罗海波 on 5/16/22.
//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
  const string s = "Keep out!";
  for(auto &c :s) {
    cout << c << endl;
  }
  return 0;
}