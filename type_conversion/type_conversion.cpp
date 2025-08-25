#include <iostream>

int main() {
  // type conversion: conversion a value of one data type to another
  //                  Implicit = automatic
  //                  Explicit = Precede value with new data type (int)

  int x = 3.14;
  double y = 3.14;
  double z = (int) 3.14;

  std::cout << x << "\n";
  std::cout << y << "\n";
  std::cout << z << "\n";

  char w = 100;
  std::cout << w << "\n"; 
  std::cout << (char) 100 << "\n";

  int correct = 8;
  int questions = 10;
  double wrongScore = correct / questions * 100;    // 정수 / 정수 => 소숫점 버림
  double realScore = correct / (double) questions * 100;
  std::cout << wrongScore << "\n";
  std::cout << realScore << "\n";

  return 0;
}