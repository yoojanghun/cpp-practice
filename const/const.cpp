#include <iostream>

int main() {
  // The const keyword specifies that a variable's value is constant
  // tells the compiler to prevent anything from modifying it
  // (read-only)

  const double PI = 3.141592;     // 상수는 관습적으로 대문자
  double radius = 10;
  double circumference = 2 * PI * radius;

  const int LIGHT_SPEED = 299792458;

  std::cout << circumference << "cm";

  return 0;
}