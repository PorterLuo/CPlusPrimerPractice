//
// Created by 罗海波 on 5/16/22.
//
#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  vector<string> vString;
  string s;
  char cont = 'y';
  while(cin >> s) {
    vString.push_back(s);
    cout << "您要继续吗(y or n)"<< endl;
    cin >> cont;
    if (cont != 'y' && cont != 'Y') {
      break;
    }
  }
  for(auto mem: vString) {
    cout << mem << " ";
  }
  cout << endl;
  return 0;
}