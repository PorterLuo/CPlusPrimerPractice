//
// Created by 罗海波 on 5/12/22.
//

#include <iostream>
int main(){
  int sum = 0;
  int index = 50;
  while(index <= 100) {
    sum += index;
    ++index;
  }
  std::cout << "50 到 100 之间的整数之和为： " << sum << std::endl;
  return 0;
}