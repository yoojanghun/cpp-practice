#include <iostream>

int main() {
  // arithmetic operators: return the result of a specific 
  //                       arithmetic operation (+ - * /)

  int student = 20;

  // student = student + 1;
  student += 1;
  student++;

  // student = student - 1;
  student -= 1;
  student--;

  // student = student * 2;
  student *= 2;

  // student = student / 2;
  student /= 2;

  int remainder = student % 3;

  int truncatedVal = student / 3;
  double notTruncatedVal = student / 3.0;   // 정수 / 실수 => 실수

  std::cout << student << "\n";
  std::cout << remainder << "\n";     
  std::cout << truncatedVal << "\n";    // int로 설정하여 나머지는 버려짐.
  std::cout << notTruncatedVal << "\n";   // double로 설정하여 나머지 나타남.

  return 0;
}

// 우선순위
// 1. parenthesis
// 2. multiplication & division & modulus
// 3. addition & subtraction